#include "main.h"

/**
 * create_array - Creates an array of characters
 * @size: Size of array
 * @c: Initializng char
 * Return: Pointer to the newly defined array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *p;

	p = malloc(sizeof(char) * size);

	if (!(p))
		return ('\0');

	for (count = 0; count < size; count++)
		p[count] = c;

	return (p);
}
