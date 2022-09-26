#include "main.h"

/**
 * _strstr - Locates first occurence in string
 * @haystack: The string to be searched Haystack
 * @needle: The string to search Needle
 * Return: Pointer to the first matching byte, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	
	p = haystack;

	while (*needle != '\0')
	{
		p = haystack;
		while (*p != '\0')
		{
			if (*needle == *p)
				return (p);
			p++;
		}
		needle++;
	}
	return (NULL);
}
