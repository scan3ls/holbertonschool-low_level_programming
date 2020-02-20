 #include "holberton.h"

/**
 * _strncpy - copys a string
 *@dest: destination of copied string
 *@src: source string to be copied
 *@n: number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[i++] != '\0')
		len++;
	for (i = 0; i < (n - 1); i++)
	{
		if (i < len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}
