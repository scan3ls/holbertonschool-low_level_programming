#include "holberton.h"
/**
  * print_diagonal - draw a straight line in the termal
  *@n: length of the diagonal
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int count;
	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			print_line(count);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_line - draw the \ in the correct position
 *@n: number of lines
 *
 * Return: void
 */
void print_line(int n)
{
	int count = 1;

	do {
		_putchar(
			(count <= n && count > 0)
				? ' '
				: '\\'
			);
	} while (n >= count++);
}
