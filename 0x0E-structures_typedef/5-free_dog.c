#include "dog.h"

/**
 * free_dog - Free dog
 * @d: The dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);

	free(d);
}
