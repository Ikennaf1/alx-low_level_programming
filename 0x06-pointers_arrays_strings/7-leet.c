#include "main.h"

/**
 * leet - Modifies a string to leet string
 * @s: The string input
 * Return: String modified
 */
char *leet(char *s)
{
	char *p;
	int a = 0, swap_count = 5;
	char letter[5] = {'A', 'E', 'O', 'T', 'L'};
	char swap[5] = {'4', '3', '0', '7', '1'};

	p = s;

	while (*p != '\0')
	{
		a = 0;

		while (a < swap_count)
		{
			if (*p == letter[a] || ((*p - 32) == letter[a]))
			{
				*p = swap[a];
				break;
			}
			a++;
		}
		p++;
	}

	return (s);
}
