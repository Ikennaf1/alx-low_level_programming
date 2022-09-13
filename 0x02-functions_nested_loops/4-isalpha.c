#include "main.h"

/**
 * _isalpha - Checks if the argument is an alphabet
 * @c: The alphabet to be tested
 * Return: Returns 1 if argument is an alphabet, and 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);

	return (1);
}
