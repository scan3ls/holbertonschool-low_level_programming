#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *@nmemb: number of elements in array
 *@size: number of bytes for each element
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		((int *)p)[i] = 0;
	}

	return (p);
}
