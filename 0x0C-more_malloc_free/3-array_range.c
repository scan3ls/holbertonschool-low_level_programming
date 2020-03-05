#include "holberton.h"
#include <stdlib.h>
/**
 * fill_array - fill array with incrementing integers
 *@a: array to be filled
 *@length: length of the array
 *
 * Return: void
 */

void fill_array(int *a, size_t start, size_t length)
{
	int *p;

	p = a;
	for (; start < length; start++)
	{
		*p++ = start;
	}
}
/**
 * array_range - creates array from @min to @max
 *@min: minimum integer
 *@max: maximum integer
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int *p;
	int length = max - min + 1;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * length);
	if(p == NULL)
		return (NULL);
	fill_array(p, min, length);

	return (p);
}
