#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *@b: number as a string
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index;
	int binlen;

	if (b == NULL)
		return (0);
	binlen = getBinLen(b);
	if (binlen == -1)
		return (0);
	for (index = 0; index < binlen; index++)
	{
		num += (b[binlen - index - 1] - '0') * _pow(2, index);
	}
	return (num);
}

int getBinLen(const char *b)
{
	int len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (-1);
		len++;
	}
	return (len);
}

int _pow(int base, int power)
{
	int num = 1;
	int index;

	if (power == 0)
		return (1);
	for (index = 0; index < power; index++)
	{
		num *= base;
	}
	return (num);
}
