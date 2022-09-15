#include "main.h"

/**
 * more_numbers - Prints nums 0 - 14 10 times
 * Return: 0 Always
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar((i % 10) + '0');
	}

	for (i = 10; i < 14; i++)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
