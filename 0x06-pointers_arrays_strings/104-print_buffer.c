#include "main.h"
#include <ctype.h>

/**
 * print_buffer - Prints the buffer
 * @b: The buffer
 * @size: Size of buffer to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int char_count = 0, x, bulk;
	char *p, *q, *r;

	p = b;
	q = b;
	r = p;
	while (char_count < size)
	{
		bulk = (size - char_count) > 9 ? 10 : size - char_count;
		q += bulk;
		while(r < q)
		{
			printf("%08x:", char_count);
			for (x = 0; x < 10; x += 2, r++)
			{
				if (r >= q)
				{
					printf("     ");
					continue;
				}
				printf(" %02x", *(r++));
				printf("%02x", *r);
			}
			r = p;
			printf(" ");
			for (x = 0; x < 10; x++, p = q)
			{
				if (r >= q)
					continue;
				*r = isprint((unsigned int) *r) == 0 ? '.' : *r;
				printf("%c", *(r++));
			}
		}
		printf("\n");
		char_count += bulk;
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
