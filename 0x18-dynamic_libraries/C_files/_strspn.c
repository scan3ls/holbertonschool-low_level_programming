#include "holberton.h"

/**
 * _strspn - get length of a prefix substring
 *@s: string used
 *@accept: test characters for string
 *
 * Return: length in bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int k;

	while (s[i])
	{
		for (k = 0; s[i] != accept[k]; k++)
		{
			if (!(accept[k]))
				return (i);
		}
		i++;
	}
	return (i);
}
