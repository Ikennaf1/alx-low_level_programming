#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: input string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int final_num = 0;
	int found_int = 0;

	while (*s != '\0')
	{
		if (*s == 45)
		{
			sign *= -1;
			s++;
			continue;
		}
		if (*s >= 48 && *s <= 57)
		{
			found_int = 1;
			final_num = (final_num * 10) + (*s - '0');
			s++;
			continue;
		}
		else if (*s == 43)
		{
			s++;
			continue;;
		}
		else
		{
			if (found_int == 1 && (*s < 48 || *s > 57))
			{
				break;
			}
			s++;
			continue;
		}
	}
	final_num *= sign;

	return (final_num);
}
