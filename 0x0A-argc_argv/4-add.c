#include <stdio.h>
#include "holberton.h"

/**
 * main - add two numbers together
 *@argc: argument count
 *@argv: array of arguments
 *
 * Return: 1 if arguments are not numbers, otherwise 0
 */

int main(int argc, char *argv[])
{
	int index;
	int sum = 0;

	for (index = 1; index < argc; index++)
	{
		if (!isDigit(*(argv[index])))
		{
			printf("Error");
			return (1);
		}

		sum += _atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _atoi - converts a string to an integer
 *@s: string to convert
 *
 *Return: converted integer
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
