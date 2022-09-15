#include <stdio.h>

/**
 * main - Entry point
 * Return - Largest prime factor
 */
int main()
{
	unsigned long int num = 410;
	unsigned long int active_num = num / 2;
	unsigned long int temp, x;
	unsigned long int largest_prime = 2;

	for (; active_num > 0; active_num = temp)
	{
		temp = 0;
		for (x = active_num; x > 1; x--)
		{
			if (num % x == 0)
			{
				temp = x + 1;
				printf("%lu\n", temp);
				break;
			}
		}
		if (temp == 0)
		{
			printf("Prime factor is %lu", active_num);
			break;
		}
	}
}
