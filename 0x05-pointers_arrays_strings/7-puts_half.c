#include "holberton.h"

/**
  * puts_half - prints the second half of a string
  *@str: string to be used
  *
  * Return: void
  */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;
	int n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	for (i = 0; i <= n; i++)
	{
		_putchar(str[(len - n) + i]);
	}
	_putchar('\n');
}

/**
  * _strlen - finds the length of a string
  *@s: string to be used
  *
  * Return: length of the string
  */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
