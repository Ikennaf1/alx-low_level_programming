#include "main.h"

/**
 * uc - Changes lower case letters to upper
 * @s: Input string
 * Return: void
 */
void uc(char *s)
{
	char *p;

	p = s;

	if (*p >= 97 && *p <= 122)
	{
		*p -= 32;
	}
}

/**
 * cap_string - Capitalize each word
 * @s: input string
 * Return: Modified strig
 */
char *cap_string(char *s)
{
	char *p;
	int cap = 0;

	p = s;
	uc(p);
	while (*p != '\0')
	{
		if (cap == 1)
		{
			uc(p);
			cap = 0;
		}

		switch (*p)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap = 1;
				break;
			default:
		}
		p++;
	}

	return (s);
}
