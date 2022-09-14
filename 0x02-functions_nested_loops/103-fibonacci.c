#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	unsigned long int sum = 2;
	long int prev = 1;
	long int curr = 2;

	while (curr <= 4000000)
	{
		curr += prev;
		prev = curr - prev;

		if (curr % 2 == 0)
		{
			sum += curr;
		}
	}
	printf("%lu", sum);
	printf("\n");

	return (0);
}
