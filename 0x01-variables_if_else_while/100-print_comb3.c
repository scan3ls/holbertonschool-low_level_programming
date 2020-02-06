#include <stdio.h>
#define COMMA 44
#define SPACE 32
#define NEWLINE 10

/**
 * main - print all combinations of two digits
 *
 * Return: Value of zero
 */

int main(void)
{
	int n1;

	for (n1 = 1; n1 <= 89; n1++)
	{
		putchar((n1 / 10) + '0');
		putchar((n1 % 10) + '0');
		if (n1 != 89)
		{
		putchar(COMMA);
		putchar(SPACE);
		}
	}

	putchar(NEWLINE);

	return (0);
}
