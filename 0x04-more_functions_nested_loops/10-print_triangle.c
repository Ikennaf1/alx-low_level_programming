#include "main.h"

/**
 * print_triangle - Prints a triangle of specified height
 * @size: The size of triangle
 * Return: 0 Always
 */
void print_triangle(int size)
{
	int s;

	if (size < 1)
	{
		_putchar('\n');
		return (0);
	}

	for (; size > 0; size--)
	{
		for (s = size; s > 1; s--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	return (0);
}
