#include "dog.h"

/**
 * print_dog - Prints a dog
 * @d: The dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %.1f\nOwner:%s\n",
				d->name, d->age, d->owner);
}
