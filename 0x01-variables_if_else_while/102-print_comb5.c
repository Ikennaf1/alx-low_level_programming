#include <stdio.h>
/**
 * main - Prints pair of numbers
 * Return: Returns true always
 */
int main(void)
{
	int a, b, c, d, dcount;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = a; c <= 9; c++)
			{
				for (d = (d == 10 && b == 0) ? 0 : (b + 1); d <= 9; d++)
				//dcount = 0;

				//for (d = (d == 10 && b == 0) ? 0 : (b + 1); dcount <= 9; dcount++, d++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');

					if (a == 9 && b == 8 && c == 9 && d == 9)
						break;

					putchar(',');
					putchar(' ');
				}

				if (a == 9 && b == 8 && c == 9 && d == 9)
					break;
			}

			if (a == 9 && b == 8 && c == 9 && d == 9)
				break;
		}

		if (a == 9 && b == 8 && c == 9 && d == 9)
			break;
	}

	putchar('\n');

	return (0);
}
