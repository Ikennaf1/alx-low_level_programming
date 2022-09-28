#include "main.h"

/**
 * strlen_r - Find string length with recursion
 * @s: the string
 * Return: string length
 */
int strlen_r(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (strlen_r(s) + 1);
}

/**
 * chrcmp_ - char compare
 * @x: first char
 * @y: second char
 * Return: 1 or 0
 */
int strcmp_(char *s, int index)
{
	if (*s != '\0')
	{
		if (*s == s[index])
		{
			strcmp_((s + 1), s[index - 1]);
		}
		else
		{
			return (0);
		}
	}

	return (1);
}

/**
 * is_palindrome - Checks if given string is a palindrome
 * @s: Given string
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen_r(s) - 1;

	if (*s == '\0')
		return (1);

	return (strcmp_(s, len));
}
