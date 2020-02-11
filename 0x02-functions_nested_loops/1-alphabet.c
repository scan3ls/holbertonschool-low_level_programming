#include "holberton.h"
/**
 * main - entry point
 *
 * Retrurn: 0
 *
 * print_alphabet - print lower case alphabet
 *
 * Return: void
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
