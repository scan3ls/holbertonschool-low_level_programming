#include "holberton.h"
#define MAXLINE 1000

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
	char tmp[MAXLINE];

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
