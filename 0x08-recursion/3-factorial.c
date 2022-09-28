#include "main.h"

/**
 * factorial - Provides th factorial of given number
 * @n: The number
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
