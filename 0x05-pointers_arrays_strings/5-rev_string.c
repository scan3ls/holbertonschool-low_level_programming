#include "holberton.h"

/**
  * rev_string - reverses a string
  *@s: string to be reversed
  *
  * Return: void
  */

void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0;
	char tmp[200];

	while (i < len)
	{
		tmp[i] = *(s + (len - (i + 1)));
		i++;
	}
	for (i = 0; i < len; i++)
	{
		*(s + i) = tmp[i];
	}
}


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
