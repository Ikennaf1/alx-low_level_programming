#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}
