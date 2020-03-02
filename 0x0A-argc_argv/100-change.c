#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUARTER 25
#define DIME 10
#define NICKLE 5
#define HOLB 2
#define PENNY 1

/**
 * main - print the min. number of coins to make change for an amount of money
 *@argc: argument count
 *@argv: array of arguments
 *
 * Return: 1 if arguments passed is not 2
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	count = getCoins(cents);

	printf("%d\n", count);
	return (0);
}

/**
 * getCoins - firgure minimum number of coins needed
 *@cents: starting total cents
 *
 * Return: number of coins as integer
 */

int getCoins(int cents)
{
	int count = 0;

	while (cents != 0)
	{
		if ((cents / QUARTER) > 0)
		{
			count++;
			cents -= QUARTER;
		}
		else if ((cents / DIME) > 0)
		{
			count++;
			cents -= DIME;
		}
		else if ((cents / NICKLE) > 0)
		{
			count++;
			cents -= NICKLE;
		}
		else if ((cents / HOLB) > 0)
		{
			count++;
			cents -= HOLB;
		}
		else
		{
			count++;
			cents -= PENNY;
		}
	}
	return (count);
}
