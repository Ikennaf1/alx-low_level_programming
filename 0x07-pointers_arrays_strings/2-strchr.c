#include "main.h"

/**
 * _strchr - Finds a character
 * @s: The Haystack to search
 * @c: The Needle as search subject
 * Return: Char or Void
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;

	for (b = 0; b <= a; b++)
	{
		if (s[b] == c)
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
