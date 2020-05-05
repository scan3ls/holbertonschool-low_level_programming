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

		if (_strcmp((haystack + c), needle) == 0)
			start = c;
		else
			start = -1;
		if (start >= 0)
			return (&*(haystack + start));
		c++;
	}
	return (0);
}
