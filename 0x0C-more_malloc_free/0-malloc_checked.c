#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
