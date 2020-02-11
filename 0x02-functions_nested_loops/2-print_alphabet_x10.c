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
	print_alphabet_x10();
	return (0);
}

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
		print_alphabet();
}
