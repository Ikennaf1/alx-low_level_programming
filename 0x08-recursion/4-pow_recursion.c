#include "main.h"

/**
 * _pow_recursion - Provides the Power of a number
 * @x: the number
 * @y: The power
 * Return: The final product
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
	{
		return (x);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
