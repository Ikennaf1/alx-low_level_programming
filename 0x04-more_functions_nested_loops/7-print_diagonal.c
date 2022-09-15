#include "main.h"

/**
 * print_diagonal - Prints a diagonal line up to specified length
 * @n: number of lines
 * Return: Returns 0 always
 */
void print_diagonal(int n)
{
	int s, x;

	for (s = 0; n > 0; n--, s++)
	{
		if (n < 1)
		{
			_putchar('\n');
			return (0);
		}

		x = s;

		while (x > 0)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
