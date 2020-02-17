#include "holberton.h"

/**
  * _puts - prints a string, followeed by a new line
  *@str: string to be printed
  *
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i++));
	}
	_putchar('\n');
}
