#include "main.h"

/**
 * _islower - Checks if argument supplied is of lower case
 * @c: The alphabet to be tested
 * Return: Returns 1 if lowercase, and 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);

	return (1);
}
