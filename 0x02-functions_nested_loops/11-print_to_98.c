#include "main.h"

void nlt98(int);
/**
 * print_to_98 - Prints numbers in order from argument to 98
 * @n: Number input
 * Return: Returns void always
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}

	nlt98(n);

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n == 98)
				break;

			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

/**
 * nlt98 - What happens if n is less than 98
 * @n: input number
 * Return: void always
 */
void nlt98(int n)
{

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');

				if (n > -9)
				{
					_putchar(((n % 10) * -1) + '0');
				}
				else if (n < -9)
				{
					_putchar(((n / 10) * -1) + '0');
					_putchar(((n % 10) * -1) + '0');
				}
				else
				{
					_putchar(((n / 100) * -1) + '0');
					_putchar((((n / 10) % 10) * -1) + '0');
					_putchar(((n % 10) * -1) + '0');
				}
			}
			else if (n < 10)
			{
				_putchar((n % 10) + '0');

			}
			else
			{

				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n == 98)
				break;

			_putchar(',');
			_putchar(' ');
		}
	}


}
