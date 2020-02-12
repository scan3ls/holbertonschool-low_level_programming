#include "holberton.h"
/**
 * print_times_table - prints the 9 times table, starting with 0
 *@n: number to make time table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int r, i, multi;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (r = 0; r <= n; r++)
	{
		_putchar('0');

		for (i = 1; i <= n; i++)
		{
			_putchar(',');
			for (multi = 1000; multi > 0; multi = multi / 10)
			{
				_putchar(
					(i * r / multi) > 0 || (r == 0 && multi == 1)
					? (i * r / multi % 10) + '0'
					: ' '
				);
			}
		}

		_putchar('\n');
	}
}
