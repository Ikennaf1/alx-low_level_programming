#include <stdio.h>
/**
 * main - Prints pair of numbers
 * Return: Returns true always
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = a; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (((c + d) > (a + b) && c >= a) || a < b)
					{
						putchar((a % 10) + '0');
						putchar((b % 10) + '0');
						putchar(' ');
						putchar((c % 10) + '0');
						putchar((d % 10) + '0');

						if (a + b + c == 179 && c == 9)
							break;

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
