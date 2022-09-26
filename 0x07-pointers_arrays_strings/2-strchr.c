#include "main.h"

/**
 * _strchr - Finds a character
 * @s: The Haystack to search
 * @c: The Needle as search subject
 * Return: Char or Void
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);
}
