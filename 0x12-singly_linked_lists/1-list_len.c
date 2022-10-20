#include "lists.h"

/**
 * list_len - Prints all the elements of a list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
