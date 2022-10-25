#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: Head of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	free(*head);
	head = NULL;
}
