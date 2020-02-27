#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 *@s: string used
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return ((s + 1) - s + print (s + 1));

}
