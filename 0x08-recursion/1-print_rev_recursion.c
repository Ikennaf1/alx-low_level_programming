#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		s--;
	}
	else
		return;

	_putchar(*s);
}
