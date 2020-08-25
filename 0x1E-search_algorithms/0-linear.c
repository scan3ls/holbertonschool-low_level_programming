#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *     of integers using the Linear search algorithm
 *
 *@array: pointer to the first element of an array
 *@size: number of elemeents in array
 *@value: value to search for
 *
 * Return: index thats equals value, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	for (index = 0; index < size; index++)
	{
		printf(
			"Value checked array[%d] = [%d]\n",
			index, array[index]
		);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
