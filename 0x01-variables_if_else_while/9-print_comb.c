#include <stdio.h>
/**
 * main - Prints 0-9 combinations
 * Return: Returns true always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');

		if (i == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
