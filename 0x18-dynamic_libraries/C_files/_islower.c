#include "holberton.h"

/**
 * _islower - check case for letter
 *@c: value checked
 *
 * Return: 0 for false, is upper. 1 for true, is lower.
 */
int _islower(int c)
{
	if (c < 'a')
		return (0);
	return (1);
}
