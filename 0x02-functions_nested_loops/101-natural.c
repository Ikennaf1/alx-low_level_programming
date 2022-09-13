#include <stdio.h>

/**
 * main - Prints some natural numbers up to 1024
 * Return: Always zero
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d", sum);

	return (0);
}
