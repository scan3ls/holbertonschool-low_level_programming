#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *@dest: destination string, first half
 *@src: concatenating string, second half
 *
 * Return: final string type char*
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int last = 0;

	while (dest[i++] != '\0')
		last++;
	i = 0;
	while (src[i] != '\0')
		dest[last++] = src[i++];
	return (dest);
}
