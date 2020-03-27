#include "holberton.h"

/**
 *sets the value of a bit to 1 at a given index
 *@n: inital value
 *@index: target index of n
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bitdex = 1 << index;

	if (index > 31)
		return (-1);
	*n = *n | bitdex;
	return (1);
}
