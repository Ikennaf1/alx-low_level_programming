#include <stdio.h>
#include <limits.h>

/**
 * main - Prints the fibonacci sequence
 * Return: Zero always
 */
int main(void)
{
	unsigned long int prev_div, prev_rem, prev = 1, curr = 2;
	unsigned long int div = 0, rem = 0;
	unsigned int x, max_reached = 0;

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
			printf("%lu\n", ULONG_MAX);
			continue;
		}
		if ((curr + prev) > ULONG_MAX)
		{
			if (max_reached == 0)
			{
				prev_div = (curr + prev) / 10000000000;
				prev_rem = (curr + prev) % 10000000000;
				max_reached = 1;
				printf("sugar\n\n");
			}
			div = (prev_div + prev_rem) / 10000000000;
			rem = (prev_div + prev_rem) % 10000000000;
			prev_div = (div + rem) / 10000000000;
			prev_rem = (div + rem) % 10000000000;
			printf(", %luWWW%lu\n\n", div, rem);
		}
		else
		{
			curr += prev;
			prev = curr - prev;
			printf(", %lu", curr);
		}
	}
	printf("\n");
	return (0);
}
