#include "main.h"

/**
 * _puts - Prints the given string on output
 * @str: Input string
 * Return: void
 */
void _puts(char *str)
{
	char *p = str;

	do
	{
		_putchar(*p);
		p++;
	}
	while (*p != '\0');

	_putchar('\n');
}
