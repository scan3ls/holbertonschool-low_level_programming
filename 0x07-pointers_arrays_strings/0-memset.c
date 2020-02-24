#include "holberton.h"

/**
 * memset - fills memory with a constant byte
 *@s:memory area pointed to
 *b: constant byte used
 *n: bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
