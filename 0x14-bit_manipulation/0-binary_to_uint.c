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
	unsigned int count = 0, number = 0;
	int _len = (_strlen(b) - 1);

	if (b == NULL)
		return (0);

	while (_len >= 0)
	{
		if (b[_len] != 48 && b[_len] != 49)
			return (0);

		if (b[_len] == 49)
			number += 1 << count;

		count++;
		_len--;
	}
	return (number);
}
