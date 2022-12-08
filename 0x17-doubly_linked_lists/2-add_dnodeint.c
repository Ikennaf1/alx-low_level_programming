#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of list
 * @head: Head of list
 * @n: element
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;

	return (node);
}
