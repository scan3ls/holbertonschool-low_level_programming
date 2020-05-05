#include "holberton.h"

/**
  * _strcpy - copy a string to a destination
  *@dest: destination of source
  *@src: source string to be copied
  *
  * Return: *dest
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = src[i];
	return (dest);
}
