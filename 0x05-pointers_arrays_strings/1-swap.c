#include "holberton.h"

/**
  * swap_int - swaps the values of two integers
  *@a: first value used
  *@b: second value used
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
