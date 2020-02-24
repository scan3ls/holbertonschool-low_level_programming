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
	int i = 0;
	unsigned int k;
	unsigned int lastIndex = 0;
	int flag = 0;
	while (accept[i] != '\0')
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (s[k] != accept[i])
			{
				if (flag == 1)
					break;
			}
			else
			{
				if (lastIndex < k)
				{
					lastIndex = k;
					flag = 1;
				}
			}
		}
		i++;
	}
	return (lastIndex + 1);
}
