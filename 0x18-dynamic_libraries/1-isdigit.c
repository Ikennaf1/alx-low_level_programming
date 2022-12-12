#include "main.h"

/**
 * _isdigit - Checks input for number
 * @c: character input
 * Return: Returns 1 if input is a number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
