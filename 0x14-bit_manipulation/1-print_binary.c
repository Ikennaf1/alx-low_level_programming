#include "main.h"

/**
 * print_bin - Prints binary representation of a number
 * @n: Given number
 * Return: Nothing
 */
void print_bin(unsigned long int n)
{
	if (n != 0)
	{
		print_bin(n >> 1);
		if ((n ^ 1) == (n + 1))
			_putchar(48);
		else
			_putchar(49);
	}
}

/**
 * print_binary - ptrints binary
 * @n: Binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	print_bin(n);
}
