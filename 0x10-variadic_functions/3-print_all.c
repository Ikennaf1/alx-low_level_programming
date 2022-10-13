#include "variadic_functions.h"
/**
 * print_all - Prints all characters
 * @format: The format
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	format_options fo[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_str},
		{NULL, NULL}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *fo[j].str_id)
			{
				fo[j].func(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * _print_char - Prints a char
 * @separator: ...
 * @ap: The argument
 * Return: Nothing
 */
void _print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * _print_int - Prints an integer
 * @separator: ...
 * @ap: The argument(s)
 * Return: Nothing
 */
void _print_int(char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}

/**
 * _print_float - Prints a float
 * @separator: ...
 * @ap: The arguments
 * Return: Nothing
 */
void _print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * _print_str - Prints a iString
 * @separator: ...
 * @ap: the args
 * Return: Nothing
 */
void _print_str(char *separator, va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, str);
}
