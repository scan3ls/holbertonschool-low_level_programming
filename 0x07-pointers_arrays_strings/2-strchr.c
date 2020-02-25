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
	{
		while (*s++)
		{
			if (*s == c)
			{
				return (s);
			}
		}
	}
	return (0);
}
