#include "holberton.h"

/**
  * _strlen - finds the length of a string
  *@s: string to be used
  *
  * Return: length of the string
  */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
