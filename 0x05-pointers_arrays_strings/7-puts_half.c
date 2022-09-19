#include "main.h"

/**
 * puts_half - prints half of string
 * @str: Input string
 * Return: void
 */
void puts_half(char *str)
{
	int strcount = 0;
	char *p;

	p = str;

	while (*p != '\0')
	{
		strcount++;
		p++;
	}

	strcount += 1;

	strcount = strcount % 2 == 0 ? strcount / 2 : (strcount - 1) / 2;

	str = str + strcount;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
