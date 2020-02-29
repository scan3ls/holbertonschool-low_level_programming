#include "holberton.h"
#include <stdio.h>

/**
 * main - prints elements of argv
 *@argc: argument count
 *@argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int index;
	char **p = argv;
	int c = 0;

	for (index = 0; index < argc; index++)
	{
		while (*((*p + index) + c))
		{
			putchar(*((*p + index) + c));
			c++;
		}
		putchar('\n');
	}
	return (0);
}
