#include "main.h"

/**
 * clear_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}
