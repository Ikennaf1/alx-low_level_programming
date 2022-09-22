#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: Array input
 * @n: Number of elements in array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int *p;
	int temp, k = 0, i = 1;

	p = a;

	while (i < n)
	{
		p++;
		i++;
	}

	while (k < (i / 2))
	{
		temp = a[k];
		a[k] = *p;
		*p = temp;
		p--;
		k++;
	}
}
