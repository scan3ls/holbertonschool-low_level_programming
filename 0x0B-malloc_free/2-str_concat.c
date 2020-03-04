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
	int strlenS1, strlenS2, strlenS3;

	/*Check if NULL is passed*/
	if (s1 == NULL)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2[0] = '\0';
	}

	/*Get string lengths: Set strlenS2 to length of final string*/
	strlenS1 = getLength(s1);
	strlenS2 = getLength(s2);

	/*Set final string length*/
	strlenS3 = (strlenS1 - 1) + strlenS2;

	/*Allocate enough memory for final string*/
	concatStr = malloc(sizeof(char) * strlenS3);

	/*Verify if malloc was successful*/
	if (concatStr == NULL)
	{
		return (NULL);
	}

	/*Copy strings to new location*/
	_strcpy(s1, concatStr, 0, (strlenS1 - 1));
	_strcpy(s2, concatStr, (strlenS1 - 1), strlenS3);


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

/**
 * _strcpy - copy a string to a pointer location
 *@str: string to copy
 *@dest: pointer location destination
 *@length: amount of the source string copied
 *@start: starting index
 *
 * Return: copied string
 */

void _strcpy(char *str, char *dest, int start, int length)
{
	int index;

	for (index = 0; (start + index) < length; index++)
	{
		*(dest + start + index) = *(str + index);
	}
}
