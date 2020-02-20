#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *@dest: destination string, first half
 *@src: concatenating string, second half
 *@n: bytes used from src
 *
 * Return: final string type char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int last = 0;

	while (dest[i++] != '\0')
		last++;
	i = 0;
	while (src[i] != '\0' && i <= (n - 1))
		dest[last++] = src[i++];
	return (dest);
}
