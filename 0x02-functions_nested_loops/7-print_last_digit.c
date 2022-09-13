#include "main.h"

/**
 * print_last_digit - Prints the last digit from supplied argument
 * @n: The number to be computed
 * Return: Returns the value of last digit
 */
int print_last_digit(int n)
{
	/*if (n == 0)
		_putchar('0');

	n %= 10;

	if (n < 0)
	{
		_putchar(n + '0');
	}

	if (n > 0)
	{
		_putchar(n + '0');
	}

	return (n);*/

	if (n == 0)
		return (0);

	n %= 10;

	if (n < 0)
		return (n * -1);

	return (n);
}
