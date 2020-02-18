#include "holberton.h"
#include <stdio.h>

/**
  * main - finds and prints the largest prime factor
  *
  * Return: always 0
  */
int isDiv(int n, int n2);
int isPrime(int n);

int main(void)
{
	long long bigPrime;
	long long count;
	long long bigNum = 612852475143LL;

	for (count = 0; count < bigNum; count++)
	{
		if (isDiv(bigNum, count) && isPrime(count))
			bigPrime = count;
	}
	printf("%lli", bigPrime);
}

/**
  * isDiv - check if a number can evenly divide by another
  *@n: inital number
  *@n2: division test number
  *
  * Return: 1 if evenly divisable else 0
  */
int isDiv(int n, int n2)
{
	return (n % n2 == 0 ? 1 : 0); 
}

/**
  * isPrime - checks if n is prime
  *@n: number to check
  *
  * Return: 1 if n is prime otherwise 0
  */
int isPrime(int n)
{
	int num;

	for (num = 2; num < n; num++)
	{
		if (n % num == 00)
			return (1);
	}
	return (0);
}
