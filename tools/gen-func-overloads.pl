#!/usr/bin/env perl

use strict;
use Data::Dumper;

require "ConfigUtil.pm";
require "common.pm";

die "perl $0 <cpp interface file> <class name>\n" if @ARGV < 2;

my $cpp_ifile = shift; 
my $class_name = shift;
my $debug = shift;

my @func_list;
my $func_decl;

open (IFILE, "<$cpp_ifile") or die "Cannot open file '$cpp_ifile' !\n";
my $tmp = $/; $/ = undef; my $code = <IFILE>; $/ = $tmp; close(IFILE);

#$code =~ s/(\{(.|\n)*?\})/;/g;
$code = remove_func_body($code);
my @lines = split(/\n/, $code);
for (my $i = 0; $i < @lines; $i++) {
    my $line = trim($lines[$i]); 
    next unless ($line);

    next if is_cpp_comment($line);
    next if is_cpp_macro($line);

    if (is_c_comment_begin($line)) {
        next if (is_c_comment_end($line));
        for (my $j = $i+1; $j < @lines; $j++) {
            if (is_c_comment_end($lines[$j])) {
                $i = $j;
                last;
            }
        }
        next;
    }

    if (is_cpp_func_body_begin($line)) {
        next if (is_cpp_func_body_end($line));
        for (my $j = $i+1; $j < @lines; $j++) {
            if (is_cpp_func_body_end($lines[$j])) {
                $i = $j;
                last;
            }
        }
        next;
    }


    $func_decl .= $line." ";  # always append one space to separate 2 identifiers
    if ($line =~ /;$/) {
        push @func_list, $func_decl;
        $func_decl = undef;
    }
}

push @func_list, $func_decl if $func_decl;
Debug(Dumper(@func_list));

my $tabspaces = ' 'x4;

my $allcode_cpp;
my $allcode_macro;

Debug("wrap class : $class_name\n");

my $class_scope = {};
Config::SetConfigData($class_scope, "class_name", $class_name);

my %func_wrap_code_gen_dispatch;
$func_wrap_code_gen_dispatch{"static"} = \&gen_static_mem_func_wrap_code;
$func_wrap_code_gen_dispatch{"member"} = \&gen_member_func_wrap_code;
$func_wrap_code_gen_dispatch{"ctor"} = \&gen_ctor_wrap_code;
$func_wrap_code_gen_dispatch{"dtor"} = \&gen_dtor_wrap_code; 

my $if = 0;
foreach (@func_list) {
    my $function = Config::SetNode($class_scope, "function", $if++);

    parse_func_decl($function, $_);
}

for (my $if = 0; ; $if++) {
    my $function = Config::GetNode($class_scope, "function", $if);
    last unless (defined $function);

    my $type = Config::GetConfigData($function, "type", "member");
    $func_wrap_code_gen_dispatch{$type}->($function);
}

if ($allcode_cpp) {
    Out(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Out("//All cpp code wrapper for wxluabind\n");
    Out(gen_wrap_ns_begin($class_name));
    Out($allcode_cpp);
    Out(gen_wrap_ns_end($class_name));
    Out("\n");
}

if ($allcode_macro) {
    Out(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Out("//All macro code for wxluabind\n");
    Out(gen_class_bind_macro_begin($class_name));
    Out($allcode_macro);
    Out(gen_class_bind_macro_end($class_name));
    Out("\n");
}

exit 0;

# ==================================================
sub parse_func_decl {
    my ($function, $func_decl) = @_;

    Debug("original func input:\n$func_decl\n");
    $func_decl = trim($func_decl);
    $func_decl = join_func($func_decl);
    Debug("after correct, func:\n$func_decl\n");

    Config::SetConfigData($function, "func", $func_decl);

    my $hasdefault = 0;
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

    if ($ret_type =~ /~/) {
        Config::SetConfigData($function, "type", "dtor");
    }
    else
    {
        if ($func_type =~ /static/)
        {
            Config::SetConfigData($function, "type", "static");
        }
        elsif ($func_type =~ /(inline|virtual)/)
        {
            Config::SetConfigData($function, "type", "member");
        }
        elsif (not $func_type)
        {
            my $type = $ret_type ? "member" : "ctor";
            Config::SetConfigData($function, "type", $type);
        }
        else 
        {
            # other types, treat it as member
            Config::SetConfigData($function, "type", "member"); 
        }
    }
}

sub gen_class_bind_macro_begin {
    my ($class_name) = @_;

    my $out = "// Bind class $class_name\n";
    $out .= "BEGIN_BIND_CLASS($class_name)\n";
    return $out;
}

sub gen_class_bind_macro_end {
    my ($class_name) = @_;

    my $out = "END_BIND_CLASS($class_name)\n";
    return $out;
}

sub gen_dtor_wrap_code {
    my ($function) = @_;

    print "this is one dtor funtion, do nothing\n";
}

sub gen_static_mem_func_wrap_code {
    my ($function) = @_;

    my $func_name = Config::GetConfigData($function, "func_name");
    my $nargs = Config::GetConfigData($function, "args_number", 0);

    my $hasdefault = Config::GetConfigData($function, "hasdefault_arg", 0);

    if ($hasdefault)
    {
        my $macro = "BIND_SMF_OVERLOAD";

        $allcode_macro .= "// Auto generated MACRO code for '$func_name':\n";
        $allcode_macro .= "// =================================\n";
        $allcode_macro .= "BEGIN_BIND_SCOPE()\n";
        for (my $i = 0; ; $i++) {
            my $argcf = Config::GetNode($function, "argument", $i);
            last unless (defined $argcf);

            my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
            next unless $hasdefault;

            $allcode_macro .= gen_static_mem_func_macro_overload($function, $i, $macro);
        }
        # always macro one func with all arguments
        $allcode_macro .= gen_static_mem_func_macro_overload($function, $nargs, $macro);
        $allcode_macro .= "END_BIND_SCOPE()\n";
        $allcode_macro .= "\n";
    }
    else
    {
        my $macro = "BIND_SMF";
        $allcode_macro .= gen_static_mem_func_macro($function, $macro); 
    }
}

sub gen_static_mem_func_macro_overload {
    my ($function, $nargs, $macro) = @_;

    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");

    my $out = "$tabspaces$macro";
    $out .= "($class_name, $func_name,\n";
    $out .= "$ret_type, (";

    for (my $i = 0; $i < $nargs; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);
       
        $out .= ", " if $i != 0;
        $out .= Config::GetConfigData($argcf, "type");
    }
    $out .= "))\n";
    return $out;
}

sub gen_static_mem_func_macro {
    my ($function, $macro) = @_;
     
    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");

    my $out = "BEGIN_BIND_SCOPE()\n";
    $out .= "$tabspaces$macro";
    $out .= "($class_name, $func_name)\n";
    $out .= "END_BIND_SCOPE()\n";
    return $out;
}

# ===============================
sub gen_member_func_wrap_code {
    my ($function) = @_;

    my $func_name = Config::GetConfigData($function, "func_name");
    my $nargs = Config::GetConfigData($function, "args_number", 0);

    my $hasdefault = Config::GetConfigData($function, "hasdefault_arg", 0);

    if ($hasdefault) 
    {
        $allcode_cpp .= "// Auto generated CPP code for '$func_name'\n";
        $allcode_cpp .= "// =================================\n";

        for (my $i = 0; ; $i++) {
            my $argcf = Config::GetNode($function, "argument", $i);
            last unless (defined $argcf);

            my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
            next unless $hasdefault;

            $allcode_cpp .= gen_mem_func_overload_cpp_wrapper($function, $i);
        }
        # always print one function with all arguments
        $allcode_cpp .= gen_mem_func_overload_cpp_wrapper($function, $nargs);
        $allcode_cpp .= "\n";
        
        $allcode_macro .= "// Auto generated MACRO code for '$func_name':\n";
        $allcode_macro .= "// =================================\n";

        my $macro = "BIND_F2MF_OVERLOAD";

        for (my $i = 0; ; $i++) {
            my $argcf = Config::GetNode($function, "argument", $i);
            last unless (defined $argcf);

            my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
            next unless $hasdefault;

            $allcode_macro .= gen_mem_func_macro_overload($function, $i, $macro);
        }
        $allcode_macro .= gen_mem_func_macro_overload($function, $nargs, $macro);
    } else {
        if (has_same_func_name($func_name)) {
            my $macro = "BIND_MF_OVERLOAD";

            $allcode_macro .= gen_overload_mem_func_macro($function, $nargs, $macro);
        } else {
            my $macro = "BIND_MF";

            $allcode_macro .= gen_mem_func_macro($function, $nargs, $macro);
        }
    }
}

# is overloaded function without default arg??
sub has_same_func_name {
    my ($func_name) = @_;

    my $count = 0;
    for (my $if = 0; ; $if++) {
        my $function = Config::GetNode($class_scope, "function", $if);
        last unless (defined $function);

        my $name = Config::GetConfigData($function, "func_name");
        $count++ if $name eq $func_name;
    }
    return ($count > 1) ? 1 : 0;
}

# ==============================================================
sub gen_ctor_wrap_code {
    my ($function) = @_;
    
    my $func_name = Config::GetConfigData($function, "func_name");

    $allcode_macro .= "// Auto generated MACRO code for ctor of '$func_name':\n";
    $allcode_macro .= "// =================================\n";

    my $macro = "BIND_CTOR";

    my $nargs = Config::GetConfigData($function, "args_number", 0); 

    # always generate one dummy ctor macro (disable it)
    # $allcode_macro .= gen_ctor_macro($function, 0, $macro);

    for (my $i = 0; ; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);

        my $hasdefault = Config::GetConfigData($argcf, "hasdefault", 0);
        next unless $hasdefault;

        $allcode_macro .= gen_ctor_macro($function, $i, $macro) if $i > 0;
    }
    $allcode_macro .= gen_ctor_macro($function, $nargs, $macro);
}

# Will generate below macro for wxluabind
# BIND_CTOR()
# BIND_CTOR(ARG1)
# BIND_CTRO(ARG1, ARG2)
# ...
# One line for one call
# =====================
sub gen_ctor_macro {
    my ($function, $nargs, $macro) = @_;

    my $class_name = Config::GetConfigData($function, "class_name");
    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");

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

# ==============================================================
sub gen_wrap_ns_begin {
    my $ns = shift;
    my $out =<<EOF;
// namespace for class $ns
namespace
{
EOF
    return $out;
}

sub gen_wrap_ns_end {
    my $ns = shift;
    my $out =<<EOF;
}  // namespace for $ns
EOF
    return $out;
}

sub gen_mem_func_overload_cpp_wrapper {
    my ($function, $nargs) = @_;

    my $fname = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");
    
    my $out = "$ret_type $fname$nargs($class_name* self";

    my @args;
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

sub gen_mem_func_macro_overload {
    my ($function, $nargs, $macro) = @_;

    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");

    my $out = $macro;
    $out .= "($func_name, $nargs,\n";
    $out .= "${tabspaces}";
    $out .= "$ret_type, ($class_name*";
    
    for (my $i = 0; $i < $nargs; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);
       
        $out .= ", ";
        $out .= Config::GetConfigData($argcf, "type");
    }
    $out .= "))\n";

    return $out;
}

sub gen_mem_func_macro {
    my ($function, $nargs, $macro) = @_;

    my $func_name = Config::GetConfigData($function, "func_name");

    my $out = $macro;
    $out .= "($class_name, $func_name)\n";

    return $out;
}

sub gen_overload_mem_func_macro {
    my ($function, $nargs, $macro) = @_;

    my $func_name = Config::GetConfigData($function, "func_name");
    my $ret_type = Config::GetConfigData($function, "return_type");
    my $modifier = Config::GetConfigData($function, "func_modifier");
     
    my $out = $macro;
    $out .= "($class_name, $func_name,\n";
    $out .= "$tabspaces$ret_type, (";

    $out .= make_argument_type_list($function);
    $out .= ")";
    $out .= " $modifier" if $modifier;
    $out .= ")\n";

    return $out;
}

sub make_argument_type_list {
    my ($function) = @_;

    my $out;
    for (my $i = 0; ; $i++) {
        my $argcf = Config::GetNode($function, "argument", $i);
        last unless (defined $argcf);
       
        $out .= ", " if ($i != 0);
        $out .= Config::GetConfigData($argcf, "type");
    }
    return $out;
}

