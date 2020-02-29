#include "holberton.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the number of arguments passed
 *@argc: argument count
 *@argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	putchar('0' + argc - 1);
	putchar('\n');
	return (0);
}
