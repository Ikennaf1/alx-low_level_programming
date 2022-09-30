#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 args
 * @argc: arg count
 * @argv: args
 * Return: Product of arithmetic
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	printf("%d\n", z);

	return (0);
}
