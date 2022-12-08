#include "lists.h"

/**
 * get_dnodeint_at_index - Gets nth node of list
 * @head: Head of list
 * @index: Index to target
 * Return: Address of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (n < index)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			n++;
		}
		else
		{
			return (NULL);
		}
	}
	return (temp);
}
