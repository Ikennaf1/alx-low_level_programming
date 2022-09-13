#include "main.h"

/**
 * print_times_table - Prints times table to n
 * @n: input number
 * Return: Returns void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int x, y, product;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			product = x * y;

			if (product < 10)
			{
				_putchar(product + '0');
				if ((x == 0 && y == n) || (x * (y + 1) > 9) || (x == n && y == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			if (product > 9 && product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (product > 99 && product < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
	}
}
