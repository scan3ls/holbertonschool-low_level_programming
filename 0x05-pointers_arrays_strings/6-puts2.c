#include "holberton.h"
#define MAXLENGTH 1000

/**
  * puts2 - prints every other character of a string
  *@str: string to be used
  *
  * Return: void
  */

void puts2(char *str)
{
	int index = 0;

	while (*(str + index) != 0 && index < MAXLENGTH)
	{
		if ((index % 2) == 0)
			_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
