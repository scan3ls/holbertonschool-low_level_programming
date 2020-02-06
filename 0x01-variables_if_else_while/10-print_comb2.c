#include <stdio.h>
#define ZERO 48
#define COMMA 44
#define NINE 57
#define NEWLINE 10
#define SPACE 32
/**
 * main - print base 10 numbers seperated by commas from 00 - 99
 *
 * Return: Value of zero
 */
int main(void)
{
	int num1, num2;

	for (num1 = ZERO; num1 <= NINE; num1++)
	{
		for (num2 = ZERO; num2 <= NINE; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != NINE || num2 != NINE)
			{
				putchar(COMMA);
			}
			putchar(SPACE);
		}
	}
	putchar(NEWLINE);
	return (0);
}
