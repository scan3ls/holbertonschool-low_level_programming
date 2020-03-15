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
	unsigned int argc;
	va_list num_list;

	if (n == 0)
		return;

	va_start(num_list, n);

	for (argc = 0; argc < n; argc++)
	{
		printf("%d", va_arg(num_list, int));
		if (separator == NULL && argc < n - 1)
			printf("%s", separator);
	}
	va_end(num_list);
	printf("\n");
}
