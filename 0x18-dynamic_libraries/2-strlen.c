#include "main.h"

/**
 * _strlen - returns length of string
 * @s: input string
 * Return: Length of input string
 */
int _strlen(char *s)
{
	int count = 0;
	char *p = s;

	while (*p != '\0')
	{
		count++;
		p++;
	}

	return (count);
}
