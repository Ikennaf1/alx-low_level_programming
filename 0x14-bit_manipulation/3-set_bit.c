#include "main.h"

/**
 * set_bit - Gets bit value
 * @n: The number
 * @index: The index
 * Return: Value of bit at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int y = 1;

	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	while (index > 0)
	{
		y *= 2;
		index--;
	}
	*n = (*n) | y;

	return (1);
}
