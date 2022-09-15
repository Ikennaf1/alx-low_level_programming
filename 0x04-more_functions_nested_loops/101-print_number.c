#include "main.h"

/**
 * print_number - Prints given number
 * @n: given input
 * Return: 0 Always
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n > 999999 && n < 10000000)
	{
		_putchar((n / 1000000) + '0');
		n %= 1000000;
	}
	if (n > 99999 && n < 1000000)
	{
		_putchar((n / 100000) + '0');
		n %= 100000;
	}
	if (n > 9999 && n < 100000)
	{
		_putchar((n / 10000) + '0');
		n %= 10000;
	}
	if (n > 999 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		n %= 1000;
	}
	if (n > 99 && n < 1000)
	{
		_putchar((n / 100) + '0');
		n %= 100;
	}
	if (n > 9 && n < 100)
	{
		_putchar((n / 10) + '0');
		n %= 10;
	}
	if (n < 10 && n >= 0)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
