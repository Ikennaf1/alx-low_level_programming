#include "main.h"

/**
 * jack_bauer - prints all the minutes and hours in a day
 * Return: Returns void always
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				if ((a <= 49 && b <= 57) || (a <= 50 && b <= 51))
				{
					for (d = 48; d <= 57; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
