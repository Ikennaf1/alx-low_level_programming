#include "main.h"

/**
 * more_numbers - Prints nums 0 - 14 10 times
 * Return: 0 Always
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 48; n <= 57; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
