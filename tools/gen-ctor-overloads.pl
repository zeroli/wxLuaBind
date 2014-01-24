#!/usr/bin/env perl

use strict;
use Data::Dumper;

require "xmlconfig.pm";
require "common.pm";

die "perl $0 <class name> <cpp interface file>\n" if @ARGV < 2;

my $class_name = shift;
my $cpp_ifile = shift; 
#$debug = shift;

my @func_list;
my $func_decl;
my $comment_start = 0;
open (IFILE, "<$cpp_ifile") or die "Cannot open file '$cpp_ifile' !\n";
while (<IFILE>) {
    next if is_cpp_comment($_);

    if (is_c_comment_begin($_)) {
        $comment_start = 1;
        next;
    }
    if (is_c_comment_end($_)) {
        $comment_start = 0;
        next;
    }
    next if ($comment_start);
     
    $_ = trim($_);
    next unless $_;

    $func_decl .= $_;
    if ($_ =~ /;$/) {
        push @func_list, $func_decl;
        $func_decl = undef;
    }
}
close(IFILE);

push @func_list, $func_decl if $func_decl;
Debug(Dumper(@func_list));

my $tabspaces = ' 'x4;

my $allcode_macro;

foreach (@func_list) {
    gen_wxluabind_cpp_code($class_name, $_);
}

if ($allcode_macro) {
    Out(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Out("All macro code for wxluabind\n");
    Out($allcode_macro);
    Out("\n");
}

exit 0;

# ==========================================
sub gen_wxluabind_cpp_code {
    my ($class_name, $func_decl) = @_;

    Debug("wrap class : $class_name\n");
    Debug("original func input:\n$func_decl\n");
    $func_decl = trim($func_decl);
    $func_decl = join_func($func_decl);
    Debug("after correct, func:\n$func_decl\n");

    my $function = {};
    Config::SetConfigData($function, "class_name", $class_name);
    Config::SetConfigData($function, "func", $func_decl);

    my ($func_type, $ret_type, $func_name, $args_decl, $modifier)
        = parse_cpp_func($func_decl);
    if ($func_name)
    {
        Debug("prefix cpp keywords: '$func_type'\n");
        Debug("return type: '$ret_type'\n");
        Debug("function name: '$func_name'\n");
        Debug("arguments types: '$args_decl'\n");
        Debug("postfix cpp keywords: '$modifier'\n");

        Config::SetConfigData($function, "return_type", $ret_type);
        Config::SetConfigData($function, "func_name", $func_name);
        Config::SetConfigData($function, "func_type", $func_type);
        Config::SetConfigData($function, "func_modifier", $modifier);

        my $i_arg = 0;
        my @parts = split(/,/, $args_decl);
        foreach (@parts) {
            $_ = trim($_);

            my $argcf = Config::SetNode($function, "argument", $i_arg++);
            Config::SetConfigData($argcf, "hasdefault", 0);

            my @array = split(/=/, $_);
            if (@array >= 2) {
                my $defaultval = pop(@array);
                Config::SetConfigData($argcf, "hasdefault", 1);
                Config::SetConfigData($argcf, "default", $defaultval);
            }
            $_ = $array[0];

            @array = split(/\s+/, $_);
            my $name = trim(pop(@array)) if (@array >= 2);
            $_ = join(' ', @array);

            if ($name =~ /^([\*&]+)([^\s].*)/) {
                $_ .= " $1"; 
                $name = trim($2);
            }

            Config::SetConfigData($argcf, "type", $_);
            Config::SetConfigData($argcf, "name", $name);
            Debug("argument type: '$_'\n"); 
            Debug("argument name: '$name'\n"); 
        }
        Config::SetConfigData($function, "args_number", $i_arg);
    } else {
        Debug("!!!!!Maybe not one correct function declaration.\n");
        return;
    }

    Debug(Dumper($function));


    my $func_name = Config::GetConfigData($function, "func_name");

    $allcode_macro .= "// Auto generated MACRO code for ctor of '$func_name':\n";
    $allcode_macro .= "// =================================\n";

    my $macro = "BIND_CTOR";
    Config::SetConfigData($function, "macro", $macro);

    my $nargs = Config::GetConfigData($function, "args_number", 0); 

    # always generate one dummy ctor macro
    $allcode_macro .= gen_ctor_macro($function, 0);

    for (my $i = 0; ; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);

        my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
        next unless $hasdefault;

        $allcode_macro .= gen_ctor_macro($function, $i) if $i > 0;
    }
    $allcode_macro .= gen_ctor_macro($function, $nargs);
}

# ==============================================================
# Will generate below macro for wxluabind
# BIND_CTOR()
# BIND_CTOR(ARG1)
# BIND_CTRO(ARG1, ARG2)
# ...
# One line for one call
# =====================
sub gen_ctor_macro {
    my ($function, $nargs) = @_;

    my $class_name = Config::GetConfigData($function, "class_name");
    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");
    my $macro = Config::GetConfigData($function, "macro");

    my $out = $macro;
    $out .= "(";
    
    for (my $i = 0; $i < $nargs; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);
       
        $out .= ", " if $i > 0;
        $out .= Config::GetConfigData($argcf, "type");
    }
    $out .= ")\n";

    return $out;
}


