#include "main.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog d;
	dog_t *p;

	p = &d;

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
