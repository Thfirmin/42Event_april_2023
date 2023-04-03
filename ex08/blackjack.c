#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*hand;
	int		sum = 0;

	if (argc != 2 || !argv[1][0])
		return (0);
	hand = *(argv + 1);
	while (*hand)
	{
		if ((*hand >= '2') && (*hand <= '9'))
			sum += (*hand - '0');
		else if (strchr("TJDKA", *hand))
		{
			if (*hand == 'A')
			{
				if ((++sum + 10) <= 21)
					sum += 10;
			}
			else
				sum += 10;
		}
		else
			return (0);
		hand ++;
	}
	if (sum == 21)
		printf ("Blackjack!\n");
	else
		printf ("%d\n", sum);
	return (0);
}
