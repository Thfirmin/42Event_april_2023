#!/usr/bin/php
<?php
/*
 * Declaring variable ($varName = value;)
 * > The type of variable will be setted in real time until you use it
 * */

# Preamble output
print("Choose rock, paper, or scissors: ");
# Taking input form STDION using fgets and trimming the input using trim
$chose = trim(fgets(STDIN));
echo ("chose = \"$chose\"\n");
?>
