#include <stdio.h>
/**
 * main - Display base 16 numbers
 * Return: Returns true always
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (n = 97; n <= 102; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
