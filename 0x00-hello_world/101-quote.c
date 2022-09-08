#include <stdio.h>
/**
 * main - Prints to the stderr
 * Return: Returns 1 on success
 */
int main(void)
{
	char str[] = "- Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "and that piece of art is useful\" %s", str);
	return (1);
}
