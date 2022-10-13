#include "variadic_functions.h"

/**
 * print_numbers - Prints given numbers followed by new line
 * @separator: The separating character
 * @n: Args count
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i == n)
			break;
		if (separator == NULL)
			continue;

		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
