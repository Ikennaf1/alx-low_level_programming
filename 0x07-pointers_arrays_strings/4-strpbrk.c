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
	char *store;

	p = s;

	while (*accept != '\0')
	{
		p = s;
		while (*p != '\0')
		{
			if (*accept == *p)
			{
				if (p > store)
				{
					p++;
					continue;
				}
				store = p;
			}
			p++;
		}
		accept++;
	}
	if (*store)
	{
		return (store);
	}
	else
	{
		return (NULL);
	}
}
