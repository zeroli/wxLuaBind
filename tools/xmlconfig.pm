#!/usr/bin/env perl
#* vim:set ts=4 sw=4 nohlsearch number incsearch showmatch : *#
# package class(Config) to wrapper xml node handling 
#
package Config;

use Data::Dumper;
use XML::Simple;

$XML::Simple::PREFERRED_PARSER = 'XML::Parser';

# can parse xml string or xml file
sub Load {
	my $xml = shift;
	my %opts = @_;
	my %defopts = (keeproot=>0, searchpath=>".", suppressempty=>1, forcearray=>[], noattr=>1, keyattr=>[], contentkey=>"");
	while (my ($key,$value) = each(%opts)) {
		$defopts{$key} = $value;
	}
	my @inopts = %defopts;
	return XMLin($xml, @inopts);
}

# can output pretty xml to one file
sub Save {
	my $outxmlf = shift;
	my $outref = shift;
	my %opts = @_;
	unless (defined $outref) {
		return 0;
	}
	my %defopts = (rootname=>"", suppressempty=>1, noattr=>1, keyattr=>[], contentkey=>"");
	while (my ($key, $value) = each(%opts)) {
		$defopts{$key} = $value;
	}
	open OUTPUT, "> $outxmlf" or return 0;
	my @outopts = %defopts;
	my $outf = XMLout($outref, @outopts);
	# remove blank lines, for empty key
	my @lines = split(/\n/, $outf);
	@lines = map{ ($_ =~ m/^\s*$/) ? () : $_} @lines;
	$outf = join("\n", @lines);
	print OUTPUT $outf;
	close OUTPUT;
	return 1;
}

# subroutine: get hash pointer of node, i.e. read from one xml file
# usage:
# For example: 
# 1) <root><config>....</config></root>
# my $config = getNode($root, "config");
# 2) <root><config>...</config><config></config></root>
# my $config1 = getNode($root, "config", 1); # based on 0
# 3) <root><config><AAA>...</AAA></config></root>
# my $AAA = getNode($root, "config.AAA");
sub GetNode { return getNode(@_); }
sub getNode {
	my ($node, $name, $index) = @_;
	unless (defined $node) {
		return undef;
	}
	my @keys = split(/\./, $name);
	for (my $k = 0; $k < @keys-1; $k++) {
		my ($key, $idx) = $keys[$k]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			if (exists $node->{$key}->[$idx]) {
				$node = $node->{$key}->[$idx];
			} else {
				return undef;
			}
		} else {
			if (exists $node->{$keys[$k]}) {
				$node = $node->{$keys[$k]};
			} else {
				return undef;
			}
		}
	}
	if (defined $index) {
		return $node->{$keys[-1]}->[$index];
	} else {
		my ($key, $idx) = $keys[-1]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			return $node->{$key}->[$idx];
		} else {
			return $node->{$keys[-1]};
		}
	}
}

# add one empty node to existing node with specific name and index
# if that node already exists, simply return that node
sub SetNode { return setNode(@_); }
sub setNode {
	my ($node, $name, $index) = @_;
	unless (defined $node) {
		return undef;
	}
	my @keys = split(/\./, $name);
	for (my $k = 0; $k < @keys-1; $k++) {
		my ($key, $idx) = $keys[$k]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			unless (exists ($node->{$key}->[$idx])) {
				$node->{$key}->[$idx] = {};
			}
			$node = $node->{$key}->[$idx];
		} else {
			unless (exists $node->{$keys[$k]}) {
				$node->{$keys[$k]} = {};
			} 
			$node = $node->{$keys[$k]};
		}
	}
	my $ret = {};
	if (defined $index) {
		if (exists $node->{$keys[-1]}->[$index]) {
			$ret = $node->{$keys[-1]}->[$index];
		} else {
			$node->{$keys[-1]}->[$index] = $ret;
		}
	} else {
		my ($key, $idx) = $keys[-1]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			if (exists $node->{$key}->[$idx]) {
				$ret = $node->{$key}->[$idx];
			} else {
				$node->{$key}->[$idx] = $ret;
			}
		} else {
			if (exists $node->{$keys[-1]}) {
				$ret = $node->{$keys[-1]};
			} else {
				$node->{$keys[-1]} = $ret;
			}
		}
	}
	return $ret;    
}

# delete one existing node with specific node name and index
sub DeleteNode { return deleteNode(@_); }
sub deleteNode {
	my ($pnode, $name, $index) = @_;
	unless (defined $pnode) {
		return 0;
	}
	my @keys = split(/\./, $name);
	for (my $k = 0; $k < @keys-1; $k++) {
		my ($key, $idx) = $keys[$k]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			if (exists $pnode->{$key}->[$idx]) {
				$pnode = $pnode->{$key}->[$idx];
			} else {
				return 0;
			}
		} else {
			if (exists $pnode->{$keys[$k]}) {
				$pnode = $pnode->{$keys[$k]};
			} else {
				return 0;
			}
		}
	}
	if (defined $index) {
		# need check if exists and defined 
		my $node = exists $pnode->{$keys[-1]}->[$index] ? 
					$pnode->{$keys[-1]}->[$index] : undef;
		if (defined $node) {
			my $arrref = $pnode->{$keys[-1]};
			splice(@$arrref, $index, 1);
			return 1;
		} else {
			return 0;
		}
	} else {
		my ($key, $idx) = $keys[-1]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			my $node = exists $pnode->{$key}->[$idx] ? 
						$pnode->{$key}->[$idx] : undef;
			if (defined $node) {
				my $arrref = $pnode->{$key};
				splice(@$arrref, $idx, 1);
				return 1;
			} else {
				return 0;
			}
		} else {
			my $node = exists $pnode->{$keys[-1]} ? 
						$pnode->{$keys[-1]} : undef; 
			if (defined $node) {
				delete $pnode->{$keys[-1]};
				return 1;
			} else {
				return 0;
			}
		}
	}
}

# ***deprecated***
sub AddConfigData { addConfigData(@_); }
sub addConfigData {
    die "This API of 'addConfigData' is deprecated, please use 'cloneConfigNode' instead\n";
}

# clone one node data, and then attach cloned nodes to one existing node
sub CloneConfigNode { cloneConfigNode(@_); }
sub cloneConfigNode {
	my ($dst_node, $src_node) = @_;
	return unless (defined $dst_node && defined $src_node);
	foreach (keys(%$src_node)) {
		$dst_node->{$_} = Clone($src_node->{$_});
	}
}

sub DeleteChildNode { deleteChildNode(@_); }
sub deleteChildNode {
    my ($node) = @_;
    return unless (defined $node && ref($node) eq "HASH");
    foreach (keys(%$node)) {
        delete $node->{$_};
    }
}

# get hash value from one node, i.e. read from one xml file
# For example:
# 1) <root><config>AAA</config></root>
# my $cfgVal = getConfigData($root, "config", "ADA"); # return will be "AAA"
# 2) <root><config>AAA</config><config>BBB</config></root>
# my $cfgVal1 = getConfigData($root, "config", "ADA", 1); # return will be "BBB"
# 3) <root><config><AAA>A1</AAA></config><config><AAA>A2</AAA></config><root>
# my $cfgVal1 = getConfigData($root, "config.AAA", "ADA", 1); #return will be "BBB"
#==============================================================
sub GetConfigData { return getConfigData(@_); }
sub getConfigData {
	my ($node, $name, $defval, $index) = @_;
	unless (defined $node) {
		return $defval;
	}
	my @keys = split(/\./, $name);
	for (my $k = 0; $k < @keys-1; $k++) {
		my ($key, $idx) = $keys[$k]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			if (exists $node->{$key}->[$idx]) {
				$node = $node->{$key}->[$idx];
			} else {
				return $defval;
			}
		} else {
			if (exists $node->{$keys[$k]}) {
				$node = $node->{$keys[$k]};
			} else {
				return $defval;
			}
		}
	}
	if (defined $index) {	
		unless (exists $node->{$keys[-1]}->[$index]) {
			return $defval;
		} else {
			return $node->{$keys[-1]}->[$index];
		}
	} else {
		my ($key, $idx) = $keys[-1]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			unless (exists $node->{$key}->[$idx]) {
				return $defval;
			} else {
				return $node->{$key}->[$idx];
			}
		} else {
			unless (exists $node->{$keys[-1]}) {
				return $defval;
			} else {
				return $node->{$keys[-1]}; 
			}
		}
	}
}

# in looping intermediate nodes, can not use index.
# index only support final data node
# if looping intermediate node not exists, add it automatically
sub SetConfigData { setConfigData(@_); }
sub setConfigData {
	my ($node, $name, $data, $index) = @_;
	my @keys = split(/\./, $name);
	for (my $k = 0; $k < @keys-1; $k++) {
		my ($key, $idx) = $keys[$k]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			unless (exists $node->{$key}->[$idx]) {
				$node->{$key}->[$idx] = {};
			} 
			$node = $node->{$key}->[$idx];
		} else {
			unless (exists $node->{$keys[$k]}) {
				$node->{$keys[$k]} = {};
			} 
			$node = $node->{$keys[$k]};
		}
	}
	if (defined $index) {
		$node->{$keys[-1]}->[$index] = $data;
	} else {
		my ($key, $idx) = $keys[-1]=~m/(.*)\[(\d+)\]$/;
		if (defined $key) {
			$node->{$key}->[$idx] = $data;
		} else {
			$node->{$keys[-1]} = $data;
		}
	}
}

sub GetConfigKeys { return getConfigKeys(@_); }
sub getConfigKeys {
	my $node = shift;
	return keys(%$node);
}

# clone one complex node, which can support array ref
sub Clone {
	my ($node) = @_;
	unless (defined $node) {
		return undef;
	}
	my $newnode = {};
	if (ref($node) eq "ARRAY") {
		$newnode = []; # ref to array
		for (my $k = 0; ; $k++) {
			unless (defined $node->[$k]) {
				last;
			}
			my $tmp = Clone($node->[$k]);
			push @$newnode, $tmp;
		}
	} elsif (ref($node) eq "HASH") {
		for (keys %$node) {
			my $tmp = Clone($node->{$_});
			$newnode->{$_} = $tmp;
		}
	} else {
		$newnode = $node;
	}
	return $newnode;
}

sub Hash2Xml {
	my $hashref = shift;
	my %opts = @_;
	my %defopts = (rootname=>"", suppressempty=>1, noattr=>1, keyattr=>[], contentkey=>[]);
	while (my ($key, $value) = each(%opts)) {
		$defopts{$key} = $value;
	}
	my @opts = %defopts;
	my $xml = XMLout($hashref, @opts);
	return $xml;
}

sub Xml2Hash {
	my $xml = shift;
	my %opts = @_;
	my %defopts = (keeproot=>1, searchpath =>".", suppressempty=>1, noattr=>1, keyattr=>[], contentkey=>"");
	while (my ($key, $value) = each(%opts)) {
		$defopts{$key} = $value;
	}
	my @opts = %defopts;	
	my $hashref = XMLin($xml, @opts);
	return $hashref;
}

sub Dump {
	my ($node, $name) = @_;
	print STDERR "==HASH NODE('$name')==\n";
	print STDERR Dumper($node);
	print STDERR "\n";
}

sub Print {
	my ($node, $name) = @_;
	print STDERR "==XML NODE('$name')==\n";
	print STDERR Hash2Xml($node);
	print STDERR "\n";
}

1;
