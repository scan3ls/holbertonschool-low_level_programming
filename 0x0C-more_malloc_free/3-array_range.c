#include "holberton.h"
#include <stdlib.h>

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
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * length);
	if (p == NULL)
		return (NULL);


	for (i = 0; i < length; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
