#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 *@s: string used
 *
 * Return: capitalized string s
 */

char *cap_string(char *s)
{
	int i = 0;
	int capNext = 1;

	while (s[i] != 0)
	{
		if (!(inWord(s[i])))
			capNext = 1;
		if ((s[i] >= 'A' && s[i] <= 'Z'))
			capNext = 0;
		if (_isLower(s[i]) && capNext)
		{
			s[i] -= 32;
			capNext = 0;
		}
		i++;
	}
	return (s);

}
/**
 * _isLower - checks for case
 *@c: charcter used
 *
 * Return: true,1. False,2.
 */
int _isLower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * inWord - check if in word
 *@c: character checked
 *
 * Return: True, 1. False, 2.
 */

int inWord(char c)
{
	char *sep = " \t\n,;.!/\"(){}"; /*word seperators*/
	int i = 0;

	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (0);
		i++;
	}
	return (1);
}
