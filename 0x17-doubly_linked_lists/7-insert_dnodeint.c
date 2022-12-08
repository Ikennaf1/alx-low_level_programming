#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at given position
 * @h: Head of list
 * @idx: Given Position
 * @n: Element
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	temp = *h;

	while (i < idx)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	temp->prev->next = node;
	node->next = temp;
	node->prev = temp->prev;
	temp->prev = node;
	return (node);
}
