#include <stdio.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x, temp, count = 50;
	int prev = 1;
	int curr = 2;

	for (x = 1; x <= 50; x++)
	{
		if (x == 1)
			printf("%d", prev);
		if (x == 2)
			printf(", %d", curr);

		curr += prev;
		prev = curr - prev;

		printf(", %ld", curr);
	}
	printf("\n");
}
