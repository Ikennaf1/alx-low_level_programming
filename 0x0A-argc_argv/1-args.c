#include <stdio.h>

/**
 * main - Prints num of arguments passed
 * @argc: Arg count
 * @argv: Args
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
