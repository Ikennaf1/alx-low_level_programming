#include "main.h"

/**
 * largest_number - Returns largest of 3 numbers
 * @a: first num
 * @b: second num
 * @c: third num
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;
	largest = b > largest ? b : largest;
	largest = c > largest ? c : largest;

	return (largest);
}
