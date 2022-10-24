#include "lists.h"

/**
 * pop_listint - deletes the head of a list
 * @head: Head of list
 * Return: head of node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);

	new = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new;

	return (n);
}
