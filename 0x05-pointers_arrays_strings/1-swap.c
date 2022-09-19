#include "main.h"

/**
 * swap_int - swap the 2 int arguments
 * @a: first input
 * @b: Second input
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
