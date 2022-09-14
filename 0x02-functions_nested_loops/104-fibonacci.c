#include <stdio.h>
#include <stdint.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	int x;
	int64_t prev = 1;
	int64_t curr = 2;

	for (x = 1; x <= 98; x++)
	{
		if (x == 1)
		{
			printf("%" PRId64, prev);
			continue;
		}
		if (x == 2)
		{
			printf(", %" PRId64, curr);
			continue;
		}

		curr += prev;
		prev = curr - prev;

		printf(", %" PRId64, curr);
	}
	printf("\n");

	return (0);
}
