#include "holberton.h"
#include <stdio.h>

/**
  *  main - entry point
  *
  * Return: void
  */
int isFizz(int n);
int isBuzz(int n);

int main(void)
{
	int num;

	printf("1");
	for (num = 2; num <= 100; num++)
	{
		if (isFizz(num) && isBuzz(num))
		{
			printf(" FizzBuzz");
			continue;
		}
		if (isFizz(num))
		{
			printf(" Fizz");
			continue;
		}
		if (isBuzz(num))
			printf(" Buzz");
		else
			printf(" %d", num);
	}
	return (0);
}

/**
  * isFizz - check if number is multiple of 3
  *@n: number to check
  *
  * Return: 1 for true 0 for false
  */
int isFizz(int n)
{
	return ((n % 3 == 0) ? 1 : 0);
}

/**
  * isBuzz - check if number is multiple of 5
  *@n: number to check
  *
  * Return: 1 for true 0 for false
  */
int isBuzz(int n)
{
	return ((n % 5 == 0) ? 1 : 0);
}
