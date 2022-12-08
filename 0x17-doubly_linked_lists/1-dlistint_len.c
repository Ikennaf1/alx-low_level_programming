#include "lists.h"

/**
 * dlistint_len - Returns num of elements in a list
 * @h: the list head
 * Return: NUm of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *t = h;

	while (t != NULL)
	{
		num++;
		t = t->next;
	}
	return (num);
}
