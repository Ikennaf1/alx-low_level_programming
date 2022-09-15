#include "main.h"

/**
 * print_square - Prints a square to the std output
 * @size: Size of square
 * Return: 0 always
 */
void print_square(int size)
{
	int length, breadth;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (length = size; length > 0; length--)
	{
		for (breadth = size; breadth > 0; breadth--)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
}
