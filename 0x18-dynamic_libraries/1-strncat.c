#include "main.h"

/**
 * _strncat - Concatenates 2 strings
 * @dest: The final string
 * @src: The second string
 * @n: The umber of bytes to be copied
 * Return: Pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = dest;

	while (*p != '\0')
		p++;

	while ((n > 0) && (*src != '\0'))
	{
		*p = *src;
		n--;
		p++;
		src++;
	}

	return (dest);
}
