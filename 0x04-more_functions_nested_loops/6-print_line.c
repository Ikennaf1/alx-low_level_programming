#include "main.h"

/**
 * print_line - print a line up to a point
 * @n: input length
 * Return: 0 Always
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
