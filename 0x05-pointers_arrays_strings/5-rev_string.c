#include "main.h"

/**
 * rev_string - Prints given string in reverse
 * @s: Input string
 * Return: Void
 */
void rev_string(char *s)
{
	int index = 0;
	char *rev_string, *a;

	while (s[index] != '\0')
	{
		index++;
	}

	index--;
	rev_string = &(s[index]);
	a = rev_string;

	while (index >=0)
	{
		*rev_string = s[index];
		index--;
		rev_string++;
	}

	*rev_string = '\0';
	rev_string = a;

	while (rev_string[index] != '\0')
	{
		*s = *rev_string;
		s++;
		rev_string++;
	}
}
