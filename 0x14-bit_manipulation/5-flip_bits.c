#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: first num
 * @m: sec num
 * Return: Number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int invert = 0, count = 0;

	invert = n ^ m;
	while (invert)
	{
		if (invert & 1)
			count++;
		invert >>= 1;
	}
	return (count);
}
