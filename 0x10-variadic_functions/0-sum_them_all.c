#include "variadic_functions.h"

/**
 * sum_them_all - variadic function that sums of its parameters
 *@n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(sum_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sum_list, int);
	}

	va_end(sum_list);

	return (sum);
}
