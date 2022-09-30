#include <stdio.h>

/**
 * main - Prints every argument
 * @argc: arg count
 * @argv: args
 * Return: 0 on success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
