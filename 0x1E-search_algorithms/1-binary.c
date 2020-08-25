#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using binary search algorithm
 *
 *@array: pointer to first element of the array to search
 *@size: number of elements in array
 *@value: value to search for
 *
 * Return: index of value found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, m;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		m = ((left + right) / 2);
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - print array inline seperated by ', '
 * within ranges of left and right
 *
 *@array: array to print
 *@left: starting index to print
 *@right: ending index to print
 *
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t index;

	/* print first index */
	printf("%d", array[left]);

	/* print all other indices */
	for (index = left + 1; index <= right; index++)
	{
		printf(
			", %d",
			array[index]
		);
	}

	printf("\n");
}
