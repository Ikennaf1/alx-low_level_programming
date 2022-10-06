#include "main.h"

/**
 * string_nconcat - concats 2 strings
 * @s1: Str 1
 * @s2: Str 2
 * @n: fiest n bytes
 * Return: New string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, *s;
	unsigned int s1count = 0, s2count = 0;

	s = s1;
	while (*s)
	{
		s1count++;
		s++;
	}
	s = s2;
	while (*s)
	{
		s2count++;
		s++;
	}

	p = malloc(sizeof(char) * (s1count + s2count + 1));
	if (p == NULL)
		return (NULL);

	s = p;
	if (n >= s2count)
		n = s2count;

	while (s1count > 0)
	{
		*s = *s1;
		s++;
		s1++;
		s1count--;
	}
	for (s2count = 0; s2count <= n; s2count++, s++, s2++)
		*s = *s2;

	*s = '\0';
	return (p);
}
