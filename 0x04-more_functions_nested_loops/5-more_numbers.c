#include "holberton.h"

/**
  * more_numbers - execute print_numbers ten times
  *
  * Return: void
  */

void more_numbers(void)
{
	int line;

	for (line = 1; line <= 10; line++)
	{
		print_numbers();
		_putchar('\n');
	}
}

/**
  * print_numbers - print numbers 0-9 followed by a new line
  *
  * Return: void
  */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 14; num++)
	{
		if (num >= 10)
			_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
}
