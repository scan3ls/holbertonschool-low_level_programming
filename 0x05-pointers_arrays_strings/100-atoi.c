#include "holberton.h"

/**
  * _atoi - converts a string to an integer
  *@s: string to convert
  *
  *	Return: converted integer
  */

int _atoi(char *s)
{
	    int i = 0;
	    int sign = 1;
	    int sum = 0;
	    int inNum = 0;
		while (s[i] != '\0')

	{
		if (s[i] == '-')
			sign *= -1;
		if (isDigit(s[i]))
		{
			sum *= 10;
			sum += s[i] - '0';
			inNum = 1;
		}
		if (!(isDigit(s[i])) && inNum == 1)
			break;
		i++;
	}
	return (sign * sum);
}

/**
  * isDigit - checks if char value is a number value in ascii
  *@c: char value checked
  *
  * Return: 1 if char c is a digit. Otherwise 0
  */

int isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
