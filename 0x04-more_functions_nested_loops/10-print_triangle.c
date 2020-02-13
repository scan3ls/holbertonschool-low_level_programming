#include "holberton.h"
/**
  * print_triangle- prints a triangle with # followed by a new line
  *@size: height and length of the square
  *
  * Return: void
  */

void print_triangle(int size)
{
	int height, length;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (height = 0; height < size; height++)
	{
		for (length = 1; length <= size; length++)
			_putchar(
				(length >= (size - height))
					? '#'
					: ' '
				);
		_putchar('\n');
	}
}
