#include "holberton.h"

/**
 * get_bit - returns the value of a bit
 *@n: set of bits
 *@index: target bit of n
 *
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int target = 1 << index;
	int condition = n & target;

	return (condition >> index);

}
