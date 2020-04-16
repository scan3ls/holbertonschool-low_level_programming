#include "holberton.h"

#define MAX_PLACE 1000000000

/**
 * print_number - prints an integer only using putchar
 *@n: integer to print
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));

}
