#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of list
 * @head: Head of list
 * @index: the index
 * Return: Nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	if (index == 0)
	{
		node = head;
		return (node);
	}

	if (head != NULL)
	{
		while (count <= index)
		{
			if (head == NULL)
				return (NULL);
			node = head;
			head = head->next;
			count++;
		}
	}
	return (node);
}
