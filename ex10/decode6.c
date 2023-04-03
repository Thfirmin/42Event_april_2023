#include "decode.h"

void	decode6(char *msg)
{
	char		*ptr;
	const char	capt[] = "OL.EASGT";
	const char	rule[] = "OI.EASGT";

	ptr = msg;
	while (*ptr)
	{
		if (isdigit(*ptr))
		{
			if (*(ptr - 1) == ' ')
				printf ("%c", *(capt + (*ptr - '0')));
			else
				printf ("%c", *(rule + (*ptr - '0')));
		}
		else
			printf ("%c", *ptr);
		ptr++;
	}
	free(msg);
}
