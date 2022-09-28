#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	s++;

	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
