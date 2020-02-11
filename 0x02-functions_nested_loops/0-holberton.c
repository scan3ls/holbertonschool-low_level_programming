#include "holberton.h"
/**
 * main - print string using custom _putchar function
 *
 * Return: Value of zero
 */
int main(void)
{
	char str[] = "Holberton";
	int len = sizeof(str) - 1;
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
