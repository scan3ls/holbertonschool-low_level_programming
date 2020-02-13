#include "holberton.h"
/**
  * print_square - prints a square with # followed by a new line
  *@size: height and length of the square
  *
  * Return: void
  */

void print_square(int size)
{
	int height, length;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (height = 0; height < size; height++)
	{
		for (length = 0; length < size; length++)
			_putchar('#');
		_putchar('\n');
	}
}
