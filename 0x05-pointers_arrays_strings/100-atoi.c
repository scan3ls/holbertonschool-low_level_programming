#include "holberton.h"

/**
  * _atoi - converts a string to an integer
  *@s: string to convert
  *
  *	Return: converted integer
  */

int _atoi(char *s)
{
	int sum = getNum(s);

	return (sum);
}

/**
  * _pow - power a base number base by a power n
  *@n: power used on base number
  *@base: base number
  *
  * Return: integer of a power product
  */

int _pow(int base, int n)
{
	int prod = base;
	int i;

	for (i = 0; i < n; i++)
		prod = prod * base;
	return (prod);
}

/**
  * getSign - get the sign of a string for conversion to int
  *@s: string used
  *@numStart: stop counting sign at numStart
  *
  * Return: int 1 if positive -1 if negative
  */

int getSign(char *s, int numStart)
{
	int i;
	int sign = 0;

	for (i = 0; i < numStart; i++)
	{
		if (s[i] == '+')
			sign++;
		if (s[i] == '-')
			sign--;
	}
	return (sign >= 0 ? 1 : -1);
}

/**
  * getNum - get first complete number in a string
  *@s: string checked
  *
  * Return: int value of number in string
  */

int getNum(char *s)
{
	int i, multi;
	int first = 0;
	int last = 0;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			first = i;
			while (s[i] >= '0' && s[i] <= '9')
				i++;
			last = i - 1;
			break;
		}
	}

	if (first == 0 && last == 0)
		return (0);
	i = first;
	for (multi = (_pow(10, (last - first)) / 10); multi > 0; multi /= 10)
	{
		sum	+= ((s[i] - '0') * multi);
		i++;
	}
	return (sum * getSign(s, first));
}
