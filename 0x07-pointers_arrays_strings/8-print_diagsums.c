#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals in matrix
 * @a: The matrix
 * @size: size of nums to add
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int b, se_sum = 0, sw_sum = 0;

	for (b = 0; b < size; b++)
	{
		se_sum += a[(size + 1) * b];
		sw_sum += a[(size - 1) * (b + 1)];
	}

	printf("%i, %i\n", se_sum, sw_sum);
}
