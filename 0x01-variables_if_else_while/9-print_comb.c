#include <stdio.h>
#define ZERO 48
#define COMMA 44
#define NINE 57
#define NEWLINE 10
/**
 * main - print base 10 numbers seperated by commas
 *
 * Return: Value of zero
 */
int main(void)
{
	int alpha;

	for (alpha = ZERO; alpha <= NINE; alpha++)
	{
		putchar(alpha);
		if (alpha != NINE)
		{
			putchar(COMMA);

		}
	}
	putchar(NEWLINE);
	return (0);
}
