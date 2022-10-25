#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts node at given position
 * @head: Head of listing
 * @idx: The position
 * @n: The element to add
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int count = 0;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp)
	{
		if (*head == NULL)
		{
			free(new);
			return (NULL);
		}
		if (count == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
		}
		temp = temp->next;
		count++;
	}
	if (temp == NULL && idx > count)
		return (NULL);

	return (new);
}
