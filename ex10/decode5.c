#include "decode.h"

void	decode5(char *msg)
{
	char	*ptr;

	ptr = msg;
	while (*ptr)
	{
		while (*ptr && (*ptr == ' '))
			ptr ++;
		if (*ptr == '.')
		{
			printf (" ");
			while (*ptr && (*ptr == '.'))
				ptr ++;
		}
		else
		{
			printf ("%c", *ptr);
			while (*ptr && (*ptr != ' ') && (*ptr != '.'))
				ptr ++;
		}
	}
	free(msg);
}
