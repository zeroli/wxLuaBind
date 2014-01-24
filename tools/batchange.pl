#!/usr/bin/env perl

use strict;

my $ifile = $ARGV[1];
open IN, "< $ifile" or die "Failed to open file '$ifile' for reading !\n";
while (<IN>) {
    print "line: $_\n";
    if ($_ =~ /\(wx(.*)\)/) {
    	$_ =~ s/\(wx(.*)\)/\($1, wx$1\)/;
	print "replaced: $_\n";
    }
    print STDERR "$_\n";
}
print "done\n";

    	
