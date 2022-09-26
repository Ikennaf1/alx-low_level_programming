#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals in matrix
 * @a: The matrix
 * @size: size of nums to add
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int count = 0, n = 0, se_sum = 0, sw_sum = 0;
	
	while (count < size)
	{
		se_sum += *(a + n);
		n += (size + 1);
		count++;
	}

	count = 0;
	n = (size - 1);

	while (count < size)
	{
		sw_sum += *(a + n);
		n += (size - 1);
		count++;
	}

	printf("%i, ", se_sum);
	printf(" %i\n", sw_sum);
}
