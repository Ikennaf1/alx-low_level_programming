#include "main.h"

/**
 * puts2 - Prints every other character
 * @str: Input string
 * Return: Void
 */
void puts2(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		if (x % 2 != 0)
		{
			x++;
			str++;
			continue;
		}

		_putchar(*str);
		str++;
		x++;
	}
}
