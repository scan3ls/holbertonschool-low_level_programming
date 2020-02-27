#include "holberton.h"

/**
 * _print_rev_recursion - prints a reversed string, followed by a new line
 *@s: string printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
