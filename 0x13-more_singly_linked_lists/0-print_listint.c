#include "lists.h"

/**
 * print_listint - Prints all the elements in a list
 * @head: List head
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			printf("%d\n", head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
}
