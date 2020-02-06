#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print whether last digit is 0, less than 6, or greater than five
 *
 * Return: Value of zero
 */
int main(void)
{
	int n;
	int lastNum;
	char str1[80] = "Last digit of\0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum == 0)
		printf("%s %d is %d and is 0\n", str1, n, lastNum);
	else if (lastNum > 5)
		printf("%s %d is %d and is greater than 5\n", str1, n, lastNum);
	else
		printf("%s %d is %d and is less than 6\n", str1, n, lastNum);
	return (0);
}
