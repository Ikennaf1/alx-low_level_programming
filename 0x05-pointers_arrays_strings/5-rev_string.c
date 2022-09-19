#include "main.h"

/**
 * rev_string - Prints given string in reverse
 * @s: Input string
 * Return: Void
 */
void rev_string(char *s)
{
	int index = 0;
	char temp[512];
	char *rev_string;
	char *a;

	/* Count num items */
	while (s[index] != '\0')
	{
		index++;
	}

	index--;
	rev_string = temp;
	a = rev_string;

	while (index >= 0)
	{
		*rev_string = s[index];
		rev_string++;
		index--;
	}

	index = 0;
	*rev_string = '\0';

	while (*a != '\0')
	{
		s[index] = *a;
		a++;
		index++;
	}
}
