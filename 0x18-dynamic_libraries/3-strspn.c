#include "main.h"

/**
 * _strspn - Finds number of character matches
 * @s: String to be searched in
 * @accept: String to search
 * Return: Number of bytes that matches
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned int count = 0;

	p = s;

	while (*accept != '\0')
	{
		p = s;
		while (*p != '\0' && *p != ',' && *p != '.')
		{
			if (*accept == *p)
				count++;
			p++;
		}
		accept++;
	}

	return (count);
}
