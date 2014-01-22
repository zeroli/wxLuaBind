#!/usr/bin/env perl

use strict;
use Data::Dumper;

require "ConfigUtil.pm";
require "common.pm";

die "perl $0 <class name> <cpp interface file>\n" if @ARGV < 2;

my $class_name = shift;
my $cpp_ifile = shift; 
#my $debug = shift;

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

my $allcode_cpp;
my $allcode_macro;

foreach (@func_list) {
    gen_wxluabind_cpp_code($class_name, $_);
}

if ($allcode_cpp) {
    Out(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Out("All cpp code wrapper for wxluabind\n");
    Out(gen_wrap_ns_begin(""));
    Out($allcode_cpp);
    Out(gen_wrap_ns_end(""));
    Out("\n");
}

if ($allcode_macro) {
    Out(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Out("All macro code for wxluabind\n");
    Out($allcode_macro);
    Out("\n");
}

exit 0;

# ==================================================
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

    my $hasdefault = 0;
    my ($func_type, $ret_type, $func_name, $args_decl, $modifier)
        = parse_cpp_func($func_decl);
    if ($ret_type && $func_name)
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
                $hasdefault = 1;
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
        Config::SetConfigData($function, "hasdefault_arg", $hasdefault);
    } else {
        Debug("!!!!!Maybe not one correct function declaration.\n");
        Debug($func_decl);
        return;
    }

    Debug(Dumper($function));

    my $func_name = Config::GetConfigData($function, "func_name");
    my $nargs = Config::GetConfigData($function, "args_number", 0);

    if ($hasdefault) 
    {
        $allcode_cpp .= "// Auto generated CPP code for '$func_name'\n";
        $allcode_cpp .= "// =================================\n";

        for (my $i = 0; ; $i++) {
            my $argcf = Config::GetNode($function, "argument", $i);
            last unless (defined $argcf);

            my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
            next unless $hasdefault;

            $allcode_cpp .= gen_wrap_overload_static_func($function, $i);
        }
        # always print one function with all arguments
        $allcode_cpp .= gen_wrap_overload_static_func($function, $nargs);
        $allcode_cpp .= "\n";
        
        $allcode_macro .= "// Auto generated MACRO code for '$func_name':\n";
        $allcode_macro .= "// =================================\n";

        my $macro = "BIND_F2MF_OVERLOAD";
        Config::SetConfigData($function, "macro", $macro);

        for (my $i = 0; ; $i++) {
            my $argcf = Config::GetNode($function, "argument", $i);
            last unless (defined $argcf);

            my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
            next unless $hasdefault;

            $allcode_macro .= gen_overload_func_defarg_macro($function, $i);
        }
        $allcode_macro .= gen_overload_func_defarg_macro($function, $nargs);
    } else {
        my $macro = "BIND_MF";
        Config::SetConfigData($function, "macro", $macro);

        $allcode_macro .= "// Auto generated MACRO code for mem funcs:\n";
        $allcode_macro .= gen_mem_func_macro($function, $nargs);
    }
}

# ==============================================================
sub gen_wrap_ns_begin {
    my $ns = shift;
    my $out =<<EOF;
namespace $ns
{
EOF
    return $out;
}

sub gen_wrap_ns_end {
    my $ns = shift;
    my $out =<<EOF;
}  // namespace $ns
EOF
    return $out;
}

sub gen_wrap_overload_static_func {
    my ($function, $nargs) = @_;
    my $out;

    my $class_name = Config::GetConfigData($function, "class_name");
    my $fname = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");
    
    my @args;
    $out .= "$ret_type $fname$nargs($class_name* self";

    for (my $i = 0; $i < $nargs; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);

        $out .= ", ";
        $out .= Config::GetConfigData($argcf, "type");

        my $name = Config::GetConfigData($argcf, "name", "A$i");
        $out .= " $name";

        push @args, $name;
    }
    $out .= ")\n";
    # cannot append modifier, like "const" 
    
    my $real_args = join(',', @args);

    my $fbody ="{\n${tabspaces}return self->";
    $fbody .= Config::GetConfigData($function, "func_name");
    $fbody .= "($real_args);\n}\n";
 
    return $out.$fbody;
}

sub gen_overload_func_defarg_macro {
    my ($function, $nargs) = @_;

    my $class_name = Config::GetConfigData($function, "class_name");
    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");
    my $macro = Config::GetConfigData($function, "macro");

    my $out = $macro;
    $out .= "($func_name, $nargs,\n";
    $out .= "${tabspaces}";
    $out .= "$ret_type, ($class_name*";
    
    for (my $i = 0; $i < $nargs; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);
       
        $out .= ",";
        $out .= Config::GetConfigData($argcf, "type");
    }
    $out .= "))\n";

    return $out;
}

sub gen_mem_func_macro {
    my ($function, $nargs) = @_;

    my $class_name = Config::GetConfigData($function, "class_name");
    my $func_name = Config::GetConfigData($function, "func_name");
    my $macro = Config::GetConfigData($function, "macro");

    my $out = $macro;
    $out .= "($class_name, $func_name)\n";

    return $out;
}

