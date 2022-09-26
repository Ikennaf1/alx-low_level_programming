#include "main.h"

/**
 * _strchr - Finds a character
 * @s: Haystack
 * @c: Needle
 * Return: Char or Void
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
