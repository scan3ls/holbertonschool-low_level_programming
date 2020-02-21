#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * Description - where  a, e, o, t, l and their uppercase counterpart are
 * replaced by 4, 3, 0, 7, and 1 respectively
 *@s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	char *abc = "aAeEoOtTlL";
	char *leet = "43071";
	int i = 0;
	int c, num;

	while (s[i] != '\0')
	{
		for (c = 0; c < 10; c++)
		{
			if (s[i] == abc[c])
			{
				num = c / 2;
				s[i] = leet[num];
			}
		}
		i++;
	}
	return (s);
}
