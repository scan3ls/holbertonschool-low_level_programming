#include "holberton.h"

/**
 * _pally - checks if palindrome recursively
 *@s1: String checked
 *@n: length of string
 *
 * Return: 1 if true, 0 if false
 */

int _pally(char *s1, int n)
{
	if (n < 0)
		return (1);
	if (*(s1 + 0) != *(s1 + n))
	{
		return (0);
	}

	if (&*s1 == &*(s1 + n) && s1 == s1 + n)
	{
		return (1);
	}

	return (_pally((s1 + 1), n - 2));
}

int slen(char *s, int count)
{
	if(*(s + count) == '\0')
		return (count);
	return (slen(s, count + 1));
}
/**
 * is_palindrome - checks if string is palindrome
 *@s: string checked
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int sln;

	sln = slen(s, 0);

	return (_pally(s, sln - 1));
}
