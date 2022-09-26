#include "main.h"

/**
 * _strpbrk - Locates first occurence in string
 * @s: The string to be searched Haystack
 * @accept: The string to search Needle
 * Return: Pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = s;

	while (*accept != '\0')
	{
		p = s;
		while (*p != '\0')
		{
			if (*accept == *p)
			{
				s = p;
				return (p);
			}
			p++;
		}
		accept++;
	}
	return ('\0');
}
