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
	/*allocate memory to copy string str and create index counter*/
	char *p = malloc(getLength(str) * sizeof(char));
	int index;

	/*copy string str to memory position @ p*/
	for (index = 0; str[index] != '\0'; index++)
	{
		p[index] = str[index];
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

	for (length = 0; str[length] !='\0'; length++)
		;
	return (length);
}
