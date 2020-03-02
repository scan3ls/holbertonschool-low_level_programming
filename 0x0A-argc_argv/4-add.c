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
	int currentNumber;

	for (index = 1; index < argc; index++)
	{
		currentNumber = _atoi(argv[index]);

		if (!isDigit(*(argv[index])) || currentNumber < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += currentNumber;
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
			return (-1);
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
