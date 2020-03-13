#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 *@separator: separator used to format
 *@n: number of numbers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int argc;
	va_list num_list;

	if (separator == null || n == 0)
		return (0);

	va_start(num_list, n);

	printf("%d", va_arg(num_list, int));
	for (argc = 1; argc < n; argc++)
	{
		printf("%s%d", separator, va_arg(num_list, int));
	}
	va_end(num_list);
	printf("\n");
}
