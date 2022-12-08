#include "lists.h"

/**
 * add_dnodeint_end - Adds node at list end
 * @head: head of list
 * @n: element
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	if (node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	node->prev = temp;

	return (node);
}
