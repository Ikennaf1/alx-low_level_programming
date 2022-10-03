#include "main.h"

/**
 * _strlen - Calculates the string length
 * @s: The string
 * Return: Total
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	if (s == NULL)
		return (0);

	while (*s);[<65;40;20M
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * str_concat - Concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int count = 0;
	int x = 0;

	count += _strlen(s1);
	count += _strlen(s2);
	count += 1;
	p = malloc(sizeof(char) * count);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	while (*s1 != '\0')
	{
		p[x] = *s1;
		x++;
		s1++;
	}

	while (*s2 != '\0')
	{
		p[x] = *s2;
		x++;
		s2++;
	}

	p[x] = '\0';

	return (p);
}
