#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup  - allocate memory for a copy of a string
 *@str: source string
 *
 * Return: pointer to copy of the source string
 */

char *_strdup(char *str)
{
	/*Create pointer, index counter, and source string length variable.*/
	char *p;
	int index = 0;
	int strlen;

	/*Verify valid string*/
	if (str == NULL)
	{
		return (NULL);
	}

	/*Find string length and allocate enough memory at pointer p*/
	strlen = getLength(str);
	p = malloc(sizeof(char) * strlen);

	/*Verify if malloc was successful*/
	if (p == NULL)
	{
		return (NULL);
	}

	/*Copy string str to memory position @ p*/
	for (index = 0; index < strlen; index++)
	{
		*(p + index) = *(str + index);
	}

	return (p);
}

/**
 * getLength - find length of a string
 *@str: source string
 *
 * Return: length of string
 */

int getLength(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	/*Include null terminator in length*/
	return (length + 1);
}
