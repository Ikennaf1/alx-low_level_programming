#ifndef _VARIADIC_
#define _VARIADIC_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_char(char *separator, va_list ap);
void _print_int(char *separator, va_list ap);
void _print_float(char *separator, va_list ap);
void _print_str(char *separator, va_list ap);

/**
 * struct options - Format options
 * @str_id: The char representing the type
 * @func: The function to run depending on type
 */
typedef struct options
{
	char *str_id;
	void (*func)(char *separator, va_list ap);
} format_options;

#endif /* _VARIADIC_ */
