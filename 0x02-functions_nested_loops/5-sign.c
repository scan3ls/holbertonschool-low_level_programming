#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *@n: the number checked
 *
 * Return: 1 if positive, 0 if 0, -1 is negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
