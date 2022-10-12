#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The given name
 * @f: func to do that
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
