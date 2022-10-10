#include "main.h"
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner name
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
