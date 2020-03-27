#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *@n: set of bits
 *@index: index of target bit in n
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = ~(~(*n) | (1 << index));
	return (1);
}
