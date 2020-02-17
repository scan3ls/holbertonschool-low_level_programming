#include "holberton.h"
#include <stdio.h>

/**
  * print_array - print n elementss of an arry of integers
  *@a: array of numbers used
  *@n: number of elements to display
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	putchar('\n');
}
