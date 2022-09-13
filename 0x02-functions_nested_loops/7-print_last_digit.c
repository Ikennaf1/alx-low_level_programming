#include "main.h"

/**
 * print_last_digit - Prints the last digit from supplied argument
 * @n: The number to be computed
 * Return: Returns the value of last digit
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;

	return (n);
}
