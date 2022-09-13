#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x;
	float prev = 1;
	float curr = 2;

	for (x = 1; x <= 98; x++)
	{
		if (x == 1)
		{
			printf("%.0f", prev);
			continue;
		}
		if (x == 2)
		{
			printf(", %.0f", curr);
			continue;
		}

		curr += prev;
		prev = curr - prev;

		printf(", %.0f", curr);
	}
	printf("\n");

	return (0);
}
