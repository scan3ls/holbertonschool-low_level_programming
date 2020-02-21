#include "holberton.h"
/**
 * rot13 - encodes a string into rot13
 *@s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *abc =   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int c;

	while (s[i] != '\0')
	{
		for (c = 0; c < 52; c++)
		{
			if (s[i] == abc[c])
			{
				s[i] = rot13[c];
				break;
			}
		}
		i++;
	}
	return (s);
}
