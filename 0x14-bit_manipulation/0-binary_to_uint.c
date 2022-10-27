#include "main.h"

/**
 * _strlen - Finds string length
 * @s: Given string
 * Return: the length
 */
unsigned int _strlen(const char *s)
{
	const char *p;
	unsigned int count = 0;

	p = s;
	while (*p)
	{
		count++;
		p++;
	}
	return (count);
}

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: The binary
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, number = 0, _len = (_strlen(b)) - 1;
	int x, y, bit_value;

	if (b == NULL)
		return (0);

	for (x = _len; x >= 0; x--)
	{
		if (*b != '1' && *b != '0')
			return (0);

		num = ((int)*b) - 48;
		y = x;
		bit_value = (y > 0) ? 2 : 1;
		while (y > 1)
		{
			bit_value *= 2;
			y--;
		}

		number += (num * bit_value);
		b++;
	}
	return (number);
}
