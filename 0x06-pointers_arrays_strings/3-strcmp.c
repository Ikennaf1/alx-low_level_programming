#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: -1, 0, or 1 if string 1 is less, equal, or greater than string 2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	char *a, *b;
	int result;

	a = s1;
	b = s2;

	while (((*a)++ != '\0') && ((*b)++ != '\0'))
	{
		if ((*a == '\0') && (*b != '\0'))
		{
			result = -15;
			break;
		}
		else if (*a != '\0' && *b == '\0')
		{
			result = 15;
			break;
		}
		if (*a < *b)
		{
			result = -15;
			break;
		}
		else if (*a == *b)
		{
			result = 0;
		}
		else if (*a > *b)
		{
			result = 15;
			break;
		}
	}

	return (result);
}
