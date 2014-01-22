#!/usr/bin/env perl

use strict;
use Data::Dumper;

my $debug = 0;

sub Out {
    my $out = shift;
    print STDERR $out;
}

sub Debug {
    my $out = shift;
    print STDOUT $out if $debug;
}

sub trim {
    my $str = shift;
    $str = ltrim($str);
    $str = rtrim($str);
    return $str;
}

sub ltrim {
    my $str = shift;
    $str =~ s/^[\s\n]+//;
    return $str;
}

sub rtrim {
    my $str = shift;
    $str =~ s/[\s\n]+$//;
    return $str;
}

sub join_func {
    my $func = shift;
    my @parts = split(/[\n\s]+/, $func);
    return join(" ", @parts);
}

sub is_cpp_comment {
    my $line = shift;

    $line = trim($line);
    return 1 if ($line =~ /^\/\//);

    return 0;
}

sub is_c_comment_begin {
    my $line = shift;

    $line = trim($line);
    return 1 if ($line =~ /^\/\*/);
    return 0;
}

sub is_c_comment_end {
    my $line = shift;

    $line = trim($line);
    return 1 if ($line =~ /\*\/$/);
    return 0;
}

my $cppkw_functype_pat = "(virtual|inline|static)";
my $cppkw_funcmodifier_pat = "(const)";

sub parse_cpp_func {
    my $func_decl = shift;

    my ($func_type, $ret_type, $func_name, $args, $modifier);

    # locate right most parenthesis, so that modifier extracted
    my $rp = rindex($func_decl, ")");
    my $modifier = substr($func_decl, $rp+1);
   
    # extract arguments
    my @stack;
    my $lp = -1;
    for (my $p = $rp-1; $p >= 0; $p--) {
        my $c = substr($func_decl, $p, 1);
        
        push @stack, $c if $c eq ')';
         
        if ($c eq '(') {
            unless (@stack) {
                $lp = $p;
                last;
            } else {
                pop(@stack);
            }
        } 
    }
    my $args = substr($func_decl, $lp+1, $rp-$lp-1);

    # extract function name
    my $func = substr($func_decl, 0, $lp);
    $func = trim($func);
    my $fname_p = -1;
    for (my $p = $lp-1; $p >= 0; $p--) {
        my $c = substr($func_decl, $p, 1);
        next if ($c =~ /\w/);

        $fname_p = $p;
        last;
    }
    $fname_p++;

    my $func_name = substr($func_decl, $fname_p, $lp-$fname_p);

    # extract return types & function type
    $func = substr($func_decl, 0, $fname_p);
    my ($func_type, $ret_type) = (undef, $func);

    if ($func =~ /^${cppkw_functype_pat}(.+)/) {
        $func_type = $1;  
        $ret_type = $2;
    }
    return (trim($func_type), trim($ret_type), trim($func_name),
        trim($args), trim($modifier));
}

1;
