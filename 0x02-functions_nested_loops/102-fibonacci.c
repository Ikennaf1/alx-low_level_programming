#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x;
	long int prev = 1;
	long int curr = 2;

	for (x = 1; x <= 50; x++)
	{
		if (x == 1)
			printf("%ld", prev);
		if (x == 2)
			printf(", %ld", curr);

		curr += prev;
		prev = curr - prev;

		printf(", %ld", curr);
	}
	printf("\n");

	return (0);
}
