#include "lists.h"

/**
 * sum_dlistint - Sums the data in a list
 * @head: Head of list
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
