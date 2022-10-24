#include "lists.h"

/**
 * add_nodeint - Adds a node at beginning of list
 * @head: Head of list
 * @n: Element to add
 * Return: Address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
