#include "main.h"

/**
 * more_numbers - Prints nums 0 - 14 10 times
 * Return: 0 Always
 */
void more_numbers(void)
{
	int i, j, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
