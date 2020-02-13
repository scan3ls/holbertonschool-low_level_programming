#include "holberton.h"
#define PASS_NINE ('9' + 1)

/**
  * print_most_numbers - print all numbers except 2 and 4
  *
  * Return: void
  */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= PASS_NINE; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(
				(num != PASS_NINE)
					? num
					: '\n'
			);
		}
	}
}
