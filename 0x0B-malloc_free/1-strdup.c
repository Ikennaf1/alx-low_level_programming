#include "main.h"

/**
 * _strlen - counts the chars
 * @s: the string
 * Return: Total
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * _strdup - returns a pointer to a new string
 * @str: The string
 * Return: Pointer to the new string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int count;
	unsigned int string_length = _strlen(str);

	if (!str)
		return (NULL);

	p = malloc(sizeof(char) * string_length);

	for (count = 0; count < string_length; count++, str++)
		p[count] = *str;

	return (p);
}
