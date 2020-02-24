#include "holberton.h"
#define NULL 0
/**
 * _strchar - locates first occurrence of a character in a string
 *@s: string used
 *@c: character to find
 *
 * Return: Pointer to c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (c != s[i] && s[i] != '\0')
		i++;
	return ( s[i] != 0 ? &*(s + i) : NULL);
}
