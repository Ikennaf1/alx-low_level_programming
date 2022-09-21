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

	p = dest;

	while ((n > 0) && (*src != '\0'))
	{
		*p = *src;
		n--;
		p++;
		src++;
	}

	return (dest);
}
