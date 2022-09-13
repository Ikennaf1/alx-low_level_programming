#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x;
	double prev = 1;
	double curr = 2;

	for (x = 1; x <= 98; x++)
	{
		if (x == 1)
		{
			printf("%.0lf", prev);
			continue;
		}
		if (x == 2)
		{
			printf(", %.0lf", curr);
			continue;
		}

		curr += prev;
		prev = curr - prev;

		printf(", %.0lf", curr);
	}
	printf("\n");

	return (0);
}
