#include "holberton.h"

/**
 * _prime - check if number is prime
 *@n: base number
 *@cur: test number for prime
 *
 * Return: 1 for true, 0 for false
 */

int _prime(int n, int cur)
{

	if (n == cur)
	{
		return (1);
	}
	if (n % cur == 0 || n == 1)
	{
		return (0);
	}

	return (_prime(n, cur + 1));
}

/**
 * is_prime_number - extra step to find prime status recursively
 *@n: The number used
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
