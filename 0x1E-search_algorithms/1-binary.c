#include "search_algos.h"

/**
 * binary_search - Search alogithm based on binary search
 * @array: The given array
 * @size: Size of the array
 * @value: The value to search
 * Return: The index of value if found, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, mid = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (right + left) / 2;
		i = left;

		printf("Searching in array: ");

		for (; i <= right; ++i)
		{
			if (i != left)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
