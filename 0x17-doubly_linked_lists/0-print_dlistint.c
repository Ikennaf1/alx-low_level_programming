#include "lists.h"

/**
 * print_dlistint - Prints all elements of list
 * @h: The head of list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *t = h;

	while(t != NULL)
	{
		printf("%d\n", t->n);
		num++;
		t = t->next;
	}
	return (num);
}
