#include "dog.h"

/**
 * free_dog - Free dog
 * @d: The dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
