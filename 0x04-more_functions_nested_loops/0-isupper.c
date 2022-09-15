#include "main.h"

/**
 * _isupper - Checks for upper case character
 * @c: input character
 * Return: Returns 1 if characer is upper case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
