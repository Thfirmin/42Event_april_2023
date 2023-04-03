#!/usr/bin/perl

# Preamble output
print ("Enter a string: ");
# Take input from STDIN (chomp just trimming str) 
chomp (my $str = <>);
# Convert all letter in lowercase using regex
$str =~ s/(\w+)/\L$1/g;
# Verfify is palindrom
if ( $str eq reverse($str) )
{
     print "The string is a palindrome!\n";
}
else
{
     print "The string is not a palindrome.\n";
}
