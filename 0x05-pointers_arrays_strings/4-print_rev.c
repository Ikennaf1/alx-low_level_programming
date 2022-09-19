#include "main.h"

/**
 * print_rev - Prints given string in reverse
 * @s: Input string
 * Return: Void
 */
void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	p--;

	do
	{
		_putchar(*p);
		p--;
	}
	while(p >= s);

	_putchar('\n');
}
