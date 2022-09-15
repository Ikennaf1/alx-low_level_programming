#include <stdio.h>

/**
 * main - The legendary FizzBuzz program
 * Return: Returns 0 always
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", n);
		}

		if (n == 100)
			break;

		printf(" ");
	}
	printf("\n");
	return (0);
}
