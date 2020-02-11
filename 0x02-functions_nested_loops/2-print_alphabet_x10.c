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

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
		print_alphabet();
}
