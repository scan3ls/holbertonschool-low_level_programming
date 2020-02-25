#include "holberton.h"
#define NULL '\0'
/**
 * _strchr - locates first occurrence of a character in a string
 *@s: string used
 *@c: character to find
 *
 * Return: Pointer to c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	int start = -1;

	for (i = 0; i < (sizeof(s) - 1); i++)
	{
		if (c == s[i])
		{
			start = i;
			break;
		}
	}
	return (start > 0 ? &*(s + start) : NULL);
}
