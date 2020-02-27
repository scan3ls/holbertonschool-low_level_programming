#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised th the power of y
 *@x: base
 *@y: power
 *
 * Return: int x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * print(x, y - 1));
}
