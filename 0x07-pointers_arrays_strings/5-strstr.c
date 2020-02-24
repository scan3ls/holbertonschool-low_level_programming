#include "holberton.h"

/**
 * _strstr - locates a substring
 *@haystack: string searched
 *@needle: target to find
 *
 * Return: haystack string starting at first occurrence of needle or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int c = 0;
	int start = -1;

	while (*(haystack + c) != 0)
	{

		if(_strcmp((haystack + c), needle) == 0)
			start = c;
		else
			start = -1;
		if (start >= 0)
			return (&*(haystack + start));
		c++;
	}
	return (0);
}

/**
 * _strcmp - compare two strings
 *@s1: source string
 *@s2: target string
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i;

	for (i = 0; !(result) && !(s1[i] == '\0' || s2[i] == '\0'); i++)
		result = s1[i] - s2[i];
	return (result);
}
