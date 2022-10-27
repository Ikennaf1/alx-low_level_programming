#include "main.h"

/**
 * get_bit - Gets bit value
 * @n: The number
 * @index: The index
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;
	char bit[64];

	if (n == 0)
		return (0);


	while (n != 0)
	{
		if ((n ^ 1) == (n + 1))
			bit[x] = 0;
		else
			bit[x] = 1;
		n = n >> 1;

		x++;
	}

	if (index > x)
		return (-1);

	return (bit[index]);
}
