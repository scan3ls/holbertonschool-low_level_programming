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
	int n1, n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n2 % 10) + '0');
			if (n1 == 8 && n2 == 9)
				continue;
			putchar(COMMA);
			putchar(SPACE);
		}
	}

	putchar(NEWLINE);

	return (0);
}
