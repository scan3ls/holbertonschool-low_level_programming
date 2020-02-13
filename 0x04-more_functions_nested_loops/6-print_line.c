#include "holberton.h"

/**
  * print_line - draw a straight line in the termal
  *@n: length of the line
  *
  * Return: void
  */

void print_line(int n)
{
	int count = 1;

	do {
		_putchar(
			(count <= n && count > 0)
				? '_'
				: '\n'
		);
	} while (n >= count++);
}
