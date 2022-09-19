#include "main.h"

/**
 * print_array - Prints n elements of given array
 * @a: Given array
 * @n: Number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);

		if (index == (n - 1) || a[index + 1] == '\n')
		{
			break;
		}

		printf(", ");
		index++;
	}
}
