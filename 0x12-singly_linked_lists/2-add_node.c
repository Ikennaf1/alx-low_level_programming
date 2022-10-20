#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: Head of new node
 * @str: Data to be added
 * Return: Returns the address of new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;
	const char *s = str;

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
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
