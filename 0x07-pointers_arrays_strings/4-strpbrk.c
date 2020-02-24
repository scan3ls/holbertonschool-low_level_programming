#include "holberton.h"
#define MAX 1000

/**
 * _strpbrk - locates the first occurrence of any bytes in test string
 *@s: target string searched
 *@accept: string of bytes searched for
 *
 * Return: s starting at first occurrence or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int c = 0;
	int i = 0;

	while (*(s + c) != 0)
	{
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*(s + c) == *(accept + i))
				return (&*(s + c));
		}
		c++;
	}
 	return (0);
}
