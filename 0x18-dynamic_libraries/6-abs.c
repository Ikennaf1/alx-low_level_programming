#include "main.h"

/**
 * _abs - Computes the absolute value of a number
 * @n: Integer to be computed on
 * Return: Returns the absolute valute
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	if (n > 0)
		return (n);

	return (0);
}
