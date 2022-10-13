#include "variadic_functions.h"

/**
 * print_strings - Prints strings then a new line
 * @separator: Separating chars
 * @n: Num of args
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i == n)
			break;
		if (separator == NULL)
			continue;

		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
