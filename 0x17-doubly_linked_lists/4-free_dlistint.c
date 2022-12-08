#include "lists.h"

/**
 * free_dlistint_t - frees a list
 * @head: list head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
