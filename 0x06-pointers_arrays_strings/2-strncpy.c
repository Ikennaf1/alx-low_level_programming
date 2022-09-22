#include "main.h"

/**
 * _strncpy - copies src string to destination
 * @dest: The destination
 * @src: The source
 * @n: The number of bytes to be copied
 * Return: The pointer to the destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;
	int a = 0;

	p = dest;

	while (a < n && *src != '\0')
	{
		*p = *src;
		p++;
		src++;
		a++;
	}

	while (a < n)
	{
		*p = '\0';
		a++;
	}

	return (dest);
}
