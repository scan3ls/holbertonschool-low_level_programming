#include "holberton.h"
/**
 * print_alphabet - print lower case alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
