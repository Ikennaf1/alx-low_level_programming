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
		putchar(alpha++);
	}

	alpha = 65;

	while (alpha <= 90)
	{
		putchar(alpha++);
	}
	putchar('\n');

	return (0);
}
