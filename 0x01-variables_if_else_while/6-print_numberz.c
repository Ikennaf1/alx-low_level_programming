#include <stdio.h>
/**
 * main - Prints nums form 0-9
 * Return: Returns true always
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
