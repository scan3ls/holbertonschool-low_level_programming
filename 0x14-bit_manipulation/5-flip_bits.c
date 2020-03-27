#include "holberton.h"

/**
 *flip_bits - finds the number of bits needed to get from one number to another
 *@n: inital number
 *@m: target number
 *
 * Return: Number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int changed = n ^ m;
	int index;
	int sum = 0;

	for (index = 0; index < 32; index++)
	{
		if (changed & 1)
			sum++;
		changed = changed >> 1;
	}
	return (sum);
}
