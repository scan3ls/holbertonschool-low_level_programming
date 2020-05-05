#include "holberton.h"
/**
 * _memcpy - copies memory area
 *@dest: copy destination
 *@src: copy source
 *@n: length of copied memory from src
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}
