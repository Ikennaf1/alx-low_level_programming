#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: Array input
 * @n: Number of elements in array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int copy[n], i = 0;

	while (i < n)
	{
		copy[i] = a[i];
		i++;
	}
	copy[n] = '\0';
	i = 0;

	while (n > 0)
	{
		a[i++] = copy[--n];
	}
	a[i] = '\0';
}
