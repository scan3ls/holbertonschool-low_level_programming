#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number
 *@i: Number being used
 *
 * Return: last digit of num i
 */

int print_last_digit(int i)
{
	int last = _abs(i % 10);

	_putchar(last + '0');
	return (last);
}

/**
 * _abs -computes absolute value of an integer
 *@i: integer used
 *
 * Return: absolute value of i
 */

int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}
