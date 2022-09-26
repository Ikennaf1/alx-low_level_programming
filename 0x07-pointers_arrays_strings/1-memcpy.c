#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Where to copy to
 * @src: Where to copy from
 * @n: number of bytes to copy
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
