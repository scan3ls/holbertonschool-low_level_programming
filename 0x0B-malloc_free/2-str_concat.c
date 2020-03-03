#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 * Return: pointer to value of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int strlenS1;
	int strlenS2;

	/*Check if NULL is passed*/
	if (s1 == NULL)
	{
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
	}
	/*Get string lengths: Set strlenS2 to length of final string*/
	strlenS1 = getLength(s1);
	strlenS2 = getLength(s2)
	strlenS2 = (strlenS1 - 1) + strlenS2;
	/*Allocate enough memory for final string*/
	concatStr = malloc(sizeof(char) * strlenS1);
	/*Verify if malloc was successful*/
	if (concatStr == NULL)
	{
		return (NULL);
	}
	/*Copy strings to new location*/
	for (int index = 0; index < strlenS2; index++)
	{
		/*Skips s1 null terminator*/
		if (index == strlenS1)
			index++;

		*(concatStr + index) = *(s1 + index);
	}
	return (concatStr);
}

/**
 * getLength - find length of a string
 *@s: source string
 *
 * Return: length of string
 */

int getLength(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length + 1);
}
