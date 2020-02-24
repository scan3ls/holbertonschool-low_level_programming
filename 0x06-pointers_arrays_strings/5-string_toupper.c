#include "holberton.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 *@s: string to be changed
 *
 * Return: the string in all uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97)
			s[i] -= 32;
	return (s);
}