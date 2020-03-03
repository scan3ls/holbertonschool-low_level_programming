#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creatse array of chars and fills with a single char value
 *@size: size of the array
 *@c: value to fill array with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	/*allocates enough memory for the array*/
	char *p = malloc(size * sizeof(int));
	unsigned int i;

	if (size <= 0)
	{
		return (0);
	}
	if (p)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	return (0);
}
