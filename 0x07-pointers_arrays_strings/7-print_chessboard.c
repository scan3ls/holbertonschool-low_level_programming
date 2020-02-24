#include "holberton.h"

/**
 * print_chessoard - prints chess board
 *@a: size
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[y][x]);
		_putchar('\n');
	}
}
