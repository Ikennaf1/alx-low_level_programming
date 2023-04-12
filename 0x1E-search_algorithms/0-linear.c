#include "search_algos.h"

/**
 * linear_search - Searches an array for a needle using linear search
 * @array: The given array
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index of value if found, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int index, sz = size;

	if (array != NULL)
	{
		for (index = 0; index < sz; index++)
		{
			printf("Value checked array[%u] = [%d]\n", index, array[index]);

			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}
