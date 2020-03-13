#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints any number of items
 *@format: acceptable items to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, index;
	char *separator = "";

	formlist frmlist[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(list, format);
	i = 0;
	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		while (frmlist[i].type != NULL)
		{
			if (format[index] == *frmlist[i].type)
			{
				printf("%s", separator);
				frmlist[i].func(list);
				separator = ", ";
			}
			i++;
		}
		index++;
		i = 0;
	}
	va_end(list);
	printf("\n");
}

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
