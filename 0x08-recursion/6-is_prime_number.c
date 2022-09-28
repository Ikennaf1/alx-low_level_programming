#include "main.h"

/**
 * prime_ - Prime fore runner
 * @i: iteration
 * @n: given number
 * Return: 1 or 0;
 */
int prime_(int i, int n)
{
	int next_num = i + 1;

	if (n % i == 0)
		return (0);

	prime_(next_num, n);

	return (1);
}

/**
 * is_prime_number - detects a prime number
 * @n: Given number
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	if (n == 2)
		return (1);
	if (n < 0)
		return (0);
	return (prime_(2, n));
}
