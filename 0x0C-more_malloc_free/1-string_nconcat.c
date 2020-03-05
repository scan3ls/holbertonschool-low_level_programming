#include "holberton.h"
#include <stdlib.h>


/**
 * _strlen - find length of a string
 *@s: source string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: first n bytes of two
 *
 * Return: pointer to value of concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len;
	char *s3;

	/*Check if arguments are NULL*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Get string Lengths*/
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	if (n >= s2len)
	{
		n = s2len;
	}
	/*Allocate Memory for final string*/
	s3 = malloc(sizeof(char) * (s1len + n + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	/*Fill initial part of s3 with s1 values : Reuse s1len for s3 counter*/
	for (s1len =  0; s1[s1len] != '\0'; s1len++)
	{
		s3[s1len] = s1[s1len];
	}
	/*Fill remaining s3 with s2 values : Reuse s2len for s2 counter*/
	for (s2len = 0; s2len < n; s2len++)
	{
		s3[s1len] = s2[s2len];
		s1len++;
	}
	s3[s1len] = '\0';

	return (s3);
}
