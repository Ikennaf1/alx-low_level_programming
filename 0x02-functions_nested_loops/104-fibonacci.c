#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x;
	unsigned long long int prev = 1;
	unsigned long long int curr = 2;

	for (x = 1; x <= 98; x++)
	{
		if (x == 1)
		{
			printf("%llu", prev);
			continue;
		}
		if (x == 2)
		{
			printf(", %llu", curr);
			continue;
		}

		curr += prev;
		prev = curr - prev;

		printf(", %llu", curr);
	}
	printf("\n");

	return (0);
}
