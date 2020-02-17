#include "holberton.h"

/**
  * print_rev - prints a string in reverse
  *@s: string to be reversed
  *
  * Return: void
  */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i = 0;

	while (i < len)
	{
		_putchar(*(s + (len - ++i)));
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
