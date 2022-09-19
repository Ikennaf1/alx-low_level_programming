#include "main.h"

/**
 * puts_half - prints half of string
 * @str: Input string
 * Return: void
 */
void puts_half(char *str)
{
	int strcount = 0;

	while (*str != '\0')
	{
		strcount++;
		str++;
	}

	printf("%d\n", strcount);

	strcount = strcount % 2 == 0 ? strcount / 2 : (strcount - 1) / 2;

	printf("%d\n", strcount);

	str = str + strcount;

	printf("%s", str);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
