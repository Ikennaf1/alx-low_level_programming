#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: The arrray
 * @size: Size of array
 * @action: The executing function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
