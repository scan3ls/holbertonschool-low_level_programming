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

/**
 * is_palindrome - checks if string is palindrome
 *@s: string checked
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int slen;

	for (slen = 0; s[slen] != '\0'; slen++)
		;

	return (_pally(s, slen - 1));
}
