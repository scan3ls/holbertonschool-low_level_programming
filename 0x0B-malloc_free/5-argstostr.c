#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - gets length of a string
 *@str: string to count
 *
 * Return: Length of string as Integer
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * argstostr - concatenates all arguments of the program
 *@av: array of arguments
 *@ac: argument count
 *
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, c, k;
	char *stross;
	int totalcharcount = 0;

	/*Verify valid arguments*/
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/*Count memory needed for malloc*/
	for (i = 0; i < ac; i++)
	{
		totalcharcount += _strlen(av[i]);
	}
	totalcharcount += i + 1; /*Add bytes for extra '\n's and '\0'*/

	stross = malloc(sizeof(char) * totalcharcount); /*Allocate Memory*/

	/*Verify if malloc was successful*/
	if (stross == NULL)
	{
		return (NULL);
	}

	/*Populate a single pointer with strings from the arguments*/
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			*(stross + c) = av[i][k];
			c++;
		}
		*(stross + c) = '\n';
		c++;
	}
	*(stross + c) = '\0';

	return (stross);
}
