#include "lists.h"

/**
 * free_list - frees a list
 * @head: Head of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr)
	}
	free(head);
}
