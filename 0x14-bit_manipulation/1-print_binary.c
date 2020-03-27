#include "holberton.h"

/**
 * print_binary - converts & prints the binary number
 *@n: decimal number
 */

void print_binary(unsigned long int n)
{
	if ((long int) n < 0)
		_putchar('0');
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
