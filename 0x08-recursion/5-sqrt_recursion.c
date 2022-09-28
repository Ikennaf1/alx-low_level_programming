#include "main.h"

/**
 * i_sqrt - The moving part
 * @x: The moving num
 * @n: given num
 * Return: int
 */
int i_sqrt(int x, int n)
{
	int next_num = x + 1;

	if (x * x == n)
		return (x);
	else if (((x * x) < n) && ((x + 1) * (x + 1) > n))
		return (-1);
	else
		return (i_sqrt(next_num, n));
}

/**
 * _sqrt_recursion - finds the square root
 * @n: The given number
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (i_sqrt(1, n));
}
