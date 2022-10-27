#include "main.h"

/**
 * clear_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n &= (~(1 << index))) ? 1 : -1);
}
