#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array
 * @size: Size of search
 * @cmp: Function pointer
 * Return: The number, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
