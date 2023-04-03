#include "decode.h"

char	mirror(char c);

void	decode3(char *msg)
{
	for (int i = 0; *(msg + i); i ++)
		*(msg + i) = mirror(*(msg + i));
	printf ("%s", msg);
	free(msg);
}

char	mirror(char c)
{
	int		i = 0;
	short	cpt = 0;

	if (!isalpha(c))
		return (c);
	if (islower(c))
		cpt = 32;

	while ((('A' + cpt + i) != c) && (('Z' + cpt - i) != c))
		i++;
	if (c == ('A' + cpt + i))
		return ('Z' + cpt - i);
	else
		return ('A' + cpt + i);
}
