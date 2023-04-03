#include "decode.h"

void	decode4(char *msg)
{
	char	*word;

	word = strtok(msg, " ");
	while (word)
	{
		printf ("%c", atoi(word));
		word = strtok(0, " ");
		if (word)
			printf (" ");
	}
	free(msg);
}
