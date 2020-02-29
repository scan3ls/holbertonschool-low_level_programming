#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the executable name followed by a new line
 *@argc: argument count
 *@argv: array of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int index = 0;

		while (*(*argv + index) != 0)
		{
			putchar(*(*argv + index));
			index++;
		}
		putchar('\n');
	}

	return (0);
}
