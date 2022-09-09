#include <stdio.h>
/**
 * main - Prints alphabets in reverse
 * Return: Returns true always
 */
int main(void)
{
	char alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha--);
	}

	putchar('\n');

	return (0);
}
