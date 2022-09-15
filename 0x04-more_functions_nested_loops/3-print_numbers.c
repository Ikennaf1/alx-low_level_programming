#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 * Return: Always 0
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}
