#include <stdio.h>
#define SPACE 32
#define COMMA 44
#define NEWLINE 10

/**
 * main - print a combinations of two digit numbers
 *
 * Return: Value of zero
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(SPACE);
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(COMMA);
			putchar(SPACE);
		}
	}

	putchar(NEWLINE);

	return (0);
}
