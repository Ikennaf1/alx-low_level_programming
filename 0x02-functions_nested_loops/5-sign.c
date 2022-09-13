#include "main.h"

/**
 * print_sign - Prints sign of number
 * @c: Number to be tested
 * Return: Returns 1, 0, -1, if argument is +ve, zero, or -ve respectively
 */
int print_sign(int c)
{
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
