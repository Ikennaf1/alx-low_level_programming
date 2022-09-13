#include "main.h"

/**
 * times_table - prints the multiplication table
 * Return: Returns void always
 */
void times_table(void)
{
	int x, y, product, tens, units;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = (x * y);
			tens = (product / 10);
			units = (product % 10);

			if (product > 9)
			{
				_putchar(tens + '0');
				_putchar(units + '0');

				if (product >= 81)
					break;
			}

			if (product < 10)
			{
				_putchar(units + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
