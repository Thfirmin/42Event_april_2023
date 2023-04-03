#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	putLine(int len);

int		takeLength(int argc, char *argv[]);

char	*fline(char *word, int len);

int	main(int argc, char *argv[])
{
	int		len;
	char	*word;
	char	*line;

	if (argc < 2)
		return (0);
	len = takeLength(argc, argv);
	putLine(len + 4);
	for (int i = 1; i < argc; i ++)
	{
		word = strtok(*(argv + i), " ");
		while (word)
		{
			line = fline(word, len);
			printf ("* %s *\n", line);
			free(line);
			word = strtok(0, " ");
		}
	}
	putLine(len + 4);
	return (0);
}

char	*fline(char *word, int len)
{
	char	*line;
	char	*ptr;

	line = calloc (len + 1, 1);
	if (!line)
		return (0);
	ptr = line;
	while (*word)
	{
		*ptr++ = *word++;
		len--;
	}
	while (len--)
		*ptr++ = ' ';
	return (line);
}

int	takeLength(int argc, char *argv[])
{
	int		len= 0;
	char	*word;
	char	*pnt;

	for (int i = 1, aux = 0; i < argc; i ++)
	{
		word = strdup(*(argv + i));
		pnt = strtok(word, " ");
		while (pnt)
		{
			aux = strlen(pnt);
			if (aux > len)
				len = aux;
			pnt = strtok(0, " ");
		}
		free(word);
	}
	return (len);
}

void putLine(int len)
{
	for (int i = 0; i < len; i ++)
		printf ("*");
	printf ("\n");
}
