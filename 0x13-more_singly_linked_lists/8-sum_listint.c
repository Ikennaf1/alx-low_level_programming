#include "lists.h"

/**
 * sum_listint - Returns sum of all the elements
 * @head: Head of list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
