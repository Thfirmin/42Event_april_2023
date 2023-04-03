#include "decode.h"

// 1# "Veh jxyi unuhsysu oek mybb xqlu je mhyju jxu fqiimeht yd q iocrebkc.jnj vybu"
// R:
//
// 2# "Q29uZ3JhdHVsYXRpb25zIG9uIGRlY29kaW5nIHRoaXMgbGluZSwgdGhlIGZpcnN0IGxldHRlciBpczogaw=="
// R:
//
// 3# "Xlmtizgfozgrlmh lm wvxlwrmt gsrh ormv, gsv gsriw ovggvi rh: s"
// R: "Congratulations on decoding this line, the third letter is: h"
//
// 4# "67 79 78 71 82 65 84 85 76 65 84 73 79 78 83 79 78 68 69 67 79 68 73 78 71 84 72 73 83 76 73 78 69 84 72 69 78 69 88 84 67 72 65 82 65 67 84 69 82 73 83 50"
// R: "C  O  N  G  R  A  T  U  L  A  T  I  O  N  S  O  N  D  E  C  O  D  I  N  G  T  H  I  S  L  I  N  E  T  H  E  N  E  X  T  C  H  A  R  A  C  T  E  R  I  S  2"
//
// 5# "Charlie Oscar November Golf Romeo Alpha Tango Uniform Lima Alpha Tango India Oscar November Sierra ... Oscar November ... Delta Echo Charlie Oscar Delta India November Golf ... Tango Hotel India Sierra ... Lima India November Echo ... Tango Hotel Echo ... November Echo X-Ray Tango ... Lima Echo Tango Tango Echo Romeo ... India Sierra ... Juliett"
// R: "C O N G R A T U L A T I O N S . O N . D E C O D I N G . T H I S . L I N E . T H E . N E X T . L E T T E R . I S . J"
//
// 6# "C0N6r47U14710N5 0N D3C0D1N6 7H15 11N3 7H3 N3X7 13773r 15 F"
// R: "CONGRATULATIONS ON DECODING THIS LINE THE NEXT LETTER IS F"
//
// 7# "RSOEBLNZAYNDQOT QT IKITREUM OEBO YEUM, NKG AYTN PGSZNMBRT: K"
// R: "CONGRATULATIONS ON DECODING THIS LINE, THE NEXT LETTER IS: "
//    "CONGRATULATIONS ON DECODING THIS LINE  THE LAST LETTER IS: "



// "abcdefghijklmnopqrstuvwxyz"

char	rrotate(char c, int rot);

char	rotate(char c, int rot);

int	main(void)
{
	printf ("----------| Message 1 |----------\n\"%s\"\n\"", MSG1);
	decode1(strdup(MSG1));
	printf ("\"\n---------------------------------\n");
	printf ("----------| Message 2 |----------\n\"%s\"\n\"", MSG2);
	decode2(strdup(MSG2));
	printf ("\"\n---------------------------------\n");
	printf ("----------| Message 3 |----------\n\"%s\"\n\"", MSG3);
	decode3(strdup(MSG3));
	printf ("\"\n---------------------------------\n");
	printf ("----------| Message 4 |----------\n\"%s\"\n\"", MSG4);
	decode4(strdup(MSG4));
	printf ("\"\n---------------------------------\n");
	printf ("----------| Message 5 |----------\n\"%s\"\n\"", MSG5);
	decode5(strdup(MSG5));
	printf ("\"\n---------------------------------\n");
	printf ("----------| Message 6 |----------\n\"%s\"\n\"", MSG6);
	decode6(strdup(MSG6));
	printf ("\"\n---------------------------------\n");
	printf ("----------| Message 7 |----------\n\"%s\"\n\"", MSG7);
	decode7(strdup(MSG7));
	printf ("\"\n---------------------------------\n");
	return (0);
}

/*int	main(void)
{
	char	msg3[] = "Xlmtizgfozgrlmh lm wvxlwrmt gsrh ormv, gsv gsriw ovggvi rh: s";
	char	msg5[] = "Charlie Oscar November Golf Romeo Alpha Tango Uniform Lima Alpha Tango India Oscar November Sierra ... Oscar November ... Delta Echo Charlie Oscar Delta India November Golf ... Tango Hotel India Sierra ... Lima India November Echo ... Tango Hotel Echo ... November Echo X-Ray Tango ... Lima Echo Tango Tango Echo Romeo ... India Sierra ... Juliett";
	int 	msg4[] = {67, 79, 78, 71, 82, 65, 84, 85, 76, 65, 84, 73, 79, 78, 83, 79, 78, 68, 69, 67, 79, 68, 73, 78, 71, 84, 72, 73, 83, 76, 73, 78, 69, 84, 72, 69, 78, 69, 88, 84, 67, 72, 65, 82, 65, 67, 84, 69, 82, 73, 83, 50};
	int 	argc4 = (sizeof(msg4) / 4);

	// Decode 3
	printf ("\nMessage3:\n");
	for (int i = 0; *(msg3 + i); i ++)
		*(msg3 + i) = mirror(*(msg3 + i));
	printf ("\"%s\"\n", msg3);

	// Decode 4 
	printf ("\nMessage4:\n\"");
	for (int i = 0; i < argc4; i ++)
		printf (" %c ", msg4[i]);
	printf ("\"\n");

	// Decode 5
	printf ("\nMessage5:\n\"");
	for (int i = 0; *(msg5 + i); i ++)
	{
		while (msg5[i] && (msg5[i] == ' ') && (msg5[i] == '.'))
			i++;
		printf ("%c ", *(msg5 + i));
		while (msg5[i] && (msg5[i] != ' ') && (msg5[i] != '.'))
			i++;
	}
	printf ("\"\n");
	return (0);
}*/

char	rotate(char c, int rot)
{
	if (isupper(c))
		c = ((c - 'A' + rot) % ('Z' - 'A' + 1) + 'A');
	else if (islower(c))
		c = ((c - 'a' + rot) % ('z' - 'a' + 1) + 'a');
	return (c);
}

char	rrotate(char c, int rot)
{
	short	cpt = 0;

	if (!isalpha(c))
		return (c);
	if (islower(c))
		cpt = 32;
	for (int i = 0; i < rot; i ++)
	{
		c --;
		if (c == (('A' + cpt) - 1))
			c = ('Z' + cpt);
	}
	return (c);
}
