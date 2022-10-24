#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Head of list
 * @n: Elementto be added
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *ptr = NULL;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}

	return (new);
}
