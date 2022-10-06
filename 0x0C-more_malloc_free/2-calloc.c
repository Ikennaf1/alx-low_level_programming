#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Num of array elements
 * @size: size of each element
 * Return: Pointer to allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
