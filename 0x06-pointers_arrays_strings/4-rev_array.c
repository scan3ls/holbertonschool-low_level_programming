#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *@a: initial array of integers
 *@n: is the number of integers to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp[1000];
	int i;
	int len = n;

	for (i = 0; i < n; i++)
		tmp[i] = a[--len];
	for (i = 0; i < n; i++)
		a[i] = tmp[i];
}
