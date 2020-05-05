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
		unsigned int sum = 0;
	    int inNum = 0;
		while (s[i] != '\0')

	{
		if (s[i] == '-')
			sign *= -1;
		if (isdigit(s[i]))
		{
			sum *= 10;
			sum += s[i] - '0';
			inNum = 1;
		}
		if (!(isdigit(s[i])) && inNum == 1)
			break;
		i++;
	}
	return (sign * sum);
}
