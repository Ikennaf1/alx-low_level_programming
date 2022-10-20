#include "lists.h"

/**
 * add_node_end - adds a new node toend of list
 * @head: Head of list
 * @str: the data to add
 * Return: The address of newelement
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	const char *s = str;
	unsigned int len = 0;

	if (head != NULL && str != NULL)
	{
		new_node = (list_t *) malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		while (*s)
		{
			len++;
			s++;
		}
		new_node->len = len;
		new_node->str = strdup(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
				ptr = ptr->next;

			ptr->next = new_node;
		}
	}
	return (new_node);
}
