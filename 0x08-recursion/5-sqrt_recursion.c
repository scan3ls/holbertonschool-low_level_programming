#include "holberton.h"

/**
 * _sqrt - finds the natural sqrt of a number
 *@n: base number
 *@cur: test number for natural sqaure
 *
 * Return: Natural Square
 */

int _sqrt(int n, int cur)
{
	if (cur * cur == n)
	{
		return (cur);
	}
	if (cur * cur  > n)
	{
		return (-1);
	}
	return (_sqrt((n, cur + 1)));
}

/**
 * _sqrt_recursion - extra step to find natural square root recursively
 *@n: The number used
 *
 * Return: Natural sqaure or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
