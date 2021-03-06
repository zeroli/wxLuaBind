#!/usr/bin/env perl

use strict;
use Data::Dumper;

require "ConfigUtil.pm";
require "common.pm";

die "perl $0 <cpp interface file>\n" if @ARGV < 1;

my $cpp_ifile = shift; 
my $class_name = shift;
my $debug = shift;

my $enum_name;
my @enum_list;
my $enum_decl;

open (IFILE, "<$cpp_ifile") or die "Cannot open file '$cpp_ifile' !\n";
my $tmp = $/; $/ = undef; my $code = <IFILE>; $/ = $tmp; close(IFILE);

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

    if ($line =~ /^enum/) {
        my @list = split(/\s/, $line);
        $enum_name = $list[1];
        next;
    }
    next if ($line =~ /[{}]/);

    $line =~ s/(\/\*.*\*\/)*?//g; # remove embedded comment 
    $line =~ s/(\/\/+.*)*?//g; # remove embedded comment 

    my @list = split(/,/, $line);
    @list = grep{$_}map{my @arr=split(/=/, $_); trim($arr[0])}@list;
    push @enum_list, @list; 
}

Debug(Dumper(@enum_list));

my $tabspaces = ' 'x4;

my $allcode_macro;
foreach (@enum_list) {
    my $enum = $_;
    $allcode_macro .= gen_enum_macro($class_name, $enum);
}

Out(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
Out(gen_enum_bind_macro_begin($class_name, $enum_name));
Out($allcode_macro);
Out(gen_enum_bind_macro_end($class_name, $enum_name));
Out("\n");

exit 0;

# ==============================================
sub gen_enum_macro {
    my ($class_name, $enum) = @_;

    if ($class_name) {
        my $macro = "BIND_CLASS_ENUM";
        my $out = $tabspaces.$macro;
        $out .= "($class_name, ";
        $enum = trim($enum);
        $out .= $enum;
        $out .= ")\n";
        return $out;
    } else {
        my $macro = "BIND_ENUM";
        my $out = $macro;
        $out .= "(";
        $enum = trim($enum);
        $out .= $enum;

        $out .= ")\n";
        return $out;
    }
}

sub gen_enum_bind_macro_begin {
    my ($class_name, $enum_name) = @_;

    my $out;
    $out .= "BEGIN_CLASS_ENUM(".($enum_name ? $enum_name : "constant").")\n" if $class_name;
    $out .= "// Bind enum $enum_name (totally ".@enum_list.")\n";
    return $out;
}

sub gen_enum_bind_macro_end {
    my ($class_name, $enum_name) = @_;

    my $out;
    $out .= "END_CLASS_ENUM(".($enum_name ? $enum_name : "constant").")\n" if $class_name;

    return "$out\n";
}


