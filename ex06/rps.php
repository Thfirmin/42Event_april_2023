#!/usr/bin/php
<?php
# Declaring fiunction
function getIdx($ch, $opt)
{
	if ($ch == $opt[0])
		return 0;
	elseif ($ch == $opt[1])
		return 1;
	elseif ($ch == $opt[2])
		return 2;
	else
		return -1;
}
# Preamble output
print("Choose rock, paper, or scissors: ");

/*
 * Declaring variable ($varName = value;)
 * > The type of variable will be setted in real time until you use it
 *
 * Taking input from STDIN using fgets;
 * Trimming input using thim;
 * Lowercasing trimmed input using strtolower
 */
$opt = array("rock", "paper", "scissors");
$chose = strtolower(trim(fgets(STDIN)));
$chId = getIdx($chose, $opt);
if ($chId > -1)
{
	do
		$enemy = (rand(1, 42) % 3);
	while ($enemy == $chId);
	if ($enemy == (($chId + 1) % 3))
		echo "Sorry, you lost. The computer chose $opt[$enemy].\n";
	else
		echo "Congratulations! You won! The computer chose $opt[$enemy].\n";
}
?>
