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
	unsigned int x = 0;

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
	prev_div = prev / 1000000000;
	prev_rem = prev % 1000000000;
	div = curr / 1000000000;
	rem = curr % 1000000000;
	for (x = 92; x <= 98; x++)
	{
		printf(", %lu", div + (rem / 1000000000));
		printf("%lu", rem % 1000000000);
		div += prev_div;
		prev_div = div - prev_div;
		rem += prev_rem;
		prev_rem = rem - prev_rem;
	}
	printf("\n");
	return (0);
}
