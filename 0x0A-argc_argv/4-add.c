#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds to infinity
 * @argc: Arg count
 * @argv: Args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x, sum = 0;
	char *c;

	if (argc < 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		c = argv[x];
		while (*c != '\0')
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
