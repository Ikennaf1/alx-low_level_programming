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
		if (d->age == NULL)
			d->age = 0;

		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner:%s\n", d->owner);
	}
}
