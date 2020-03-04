#include "holberton.h"
#include <stdlib.h>

/**
 * wordlen - gets the length of a word in a string
 *@str: string
 *@word: target word ex: first word = 0, second = 1, etc..
 *
 * Return: length of target word
 */

int wordlen(char *str, int word)
{
	int len = 0;
	int i = 0;
	int inword = 0;
	int wordcounter = 0;

	while (wordcounter < word)
	{
		if (inword == 0 && str[i] == ' ')
			;
		else if (inword == 0 && str[i] != ' ')
		{
			wordcounter++;
			inword = 1;
		}
		else
			inword = 0;
		i++;
	}

	for (i; str[i] != ' ' && str[i] != '\0'; i++)
		len++;
	return (len + 2);
}

/**
 * _wordcount - count number of words in a string
 *@str: source string
 *
 * Return: number of words in a string as integer
 */

int _wordcount(char *str)
{
	int inword = 0;
	int i;
	int wordcount = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && inword == 0)
		{
			inword = 1;
			wordcount++;
		}
		if (str[i] == ' ')
			inword = 0;
	}
	return (wordcount);
}

/**
 * strtow - splits a string into words
 *@str: string to split
 *
 * Return: **char value of split string
 */

char **strtow(char *str)
{
	int i, wordcount, k, a;
	int totalspace;
	char **ddarry;
	char *nuul;

	if (str == NULL || str == "")
		return (NULL);
	wordcount = _wordcount(str);
	ddarry = malloc(sizeof(char *) * wordcount + 1);
	if (ddarry == NULL)
		return (NULL);
	for (i = 0; i < wordcount; i++)
	{
		ddarry[i] = malloc(sizeof(char) * _wordlen(str, i));
		if (ddarry[i] == NULL)
		{
			for (i; i >= 0; i--)
				free(ddarry[i]);
			free(ddarry);
			return (NULL);
		}
	}
	ddarry[wordcount] = NULL;
	a = 0;
	for (i = 0; i < wordcount; i++)
	{
		for (k = 0; str[a] != ' ' && str[a] != '\0'; k++)
		{
			ddarry[i][k] = str[a];
			a++;
		}
		a++;
		ddarry[i][k + 1] = '\n';
		ddarry[i][k + 2] = '\0';
	}
}
