#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: Head of list
 * @index: Position
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	/*if (head == NULL || *head == NULL)
		return (-1);*/

	if (head && *head)
	{
	temp = *head;
	if (index == 0)
	{
		temp->next->prev = NULL;
		free(*head);
		*head = temp->next;
		return (1);
	}
	while (count < index)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			count++;
		}
		else if (temp->next == NULL && count == index - 1)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
	}
	return (-1);
}
