#include <stdio.h>
/**
 * main - Prints all the alphabets
 * Return: Returns true always
 */
int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		if (alpha == 101 || alpha == 113)
		{
			alpha++;
			continue;
		}

		putchar(alpha++);
	}
	putchar('\n');

	return (0);
}
