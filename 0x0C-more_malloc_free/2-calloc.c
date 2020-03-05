#include "holberton.h"
#include <stdlib.h>

/**
 * tozero - assign elements of array to '\0'
 *@length: length of array
 *@a: array given
 */

void tozero(char *a, size_t length)
{
	char *p;

	for (p = a; length--;)
	{
		*p++ = '\0';
	}
}

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

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	tozero(p, (size * nmemb));
	return (p);
}
