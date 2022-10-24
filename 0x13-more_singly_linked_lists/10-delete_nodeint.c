#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: Head of list
 * @index: Given index
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	ptr = temp;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	while (count <= index)
	{
		if (temp == NULL)
			return (-1);

		if (count == (index - 1))
			ptr = temp;

		if (count == index)
			break;

		temp = temp->next;
		count++;
	}

	ptr->next = temp->next;
	free(temp);

	return (1);
}
