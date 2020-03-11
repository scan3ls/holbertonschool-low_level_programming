#include "function_pointers.h"

/**
 * int_index - searches array for an integer
 *@array: integer array
 *@size: size of the array
 *@cmp: pointer to compare function
 *
 * Return: index of the first element for which cmp function return true
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}

	return (-1);
}
