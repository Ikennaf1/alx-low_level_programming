#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x;
	unsigned long int prev = 1;
	unsigned long int curr = 2;

	for (x = 1; x <= 98; x++)
	{
		if (x == 1)
		{
			printf("%lu", prev);
			continue;
		}
		if (x == 2)
		{
			printf(", %lu", curr);
			continue;
		}

		curr += prev;
		prev = curr - prev;

		printf(", %lu", curr);
	}
	printf("\n");

	return (0);
}
