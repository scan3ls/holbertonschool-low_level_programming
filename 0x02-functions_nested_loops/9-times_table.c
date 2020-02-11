#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int column;
	int row;
	int target = 9;
	int num;

	for (row = 0; row <= target; row++)
	{
		for (column = 0; column <= target; column++)
		{
			num = row * column;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (num >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((num) + '0');
			}
		}

		_putchar('\n');
	}

}
