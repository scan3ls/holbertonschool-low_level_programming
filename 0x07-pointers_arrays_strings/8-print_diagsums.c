#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints th sum of the two diagonals of a square matrix
 *@a: array used
 *@size: size of array
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
		sum1 += *(a + (i * (size + 1)));
	for (i = 0; i < size; i++)
		sum2 += *(a + ((i + 1) * (size - 1)));
	printf("%d, %d\n", sum1, sum2);
}
