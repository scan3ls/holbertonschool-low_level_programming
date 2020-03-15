#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints any number of strings
 *@separator: separate between strings
 *@n: number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int parameter;
	char *tmp;
	va_list str_list;

	if (n == 0)
		return;

	va_start(str_list, n);
	tmp = va_arg(str_list, char*);
	if (tmp == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", tmp);
	}
	for (parameter = 1; parameter < n; parameter++)
	{
		tmp = va_arg(str_list, char*);
		if (tmp == NULL)
		{
			printf("%s(nil)", separator == NULL ? "" : separator);
		}
		else
		{
			printf("%s%s", separator == NULL ? "" : separator, tmp);
		}
	}
	va_end(str_list);

	printf("\n");
}
