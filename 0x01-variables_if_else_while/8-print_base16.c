#include <stdio.h>
#define a 97
#define f 102
#define ZERO 48
#define NINE 57
#define NEWLINE 10
/**
 * main - print base 16 numbers
 *
 * Return: Value of zero
 */
int main(void)
{
	int alpha;

	for (alpha = ZERO; alpha <= NINE; alpha++)
		putchar(alpha);
	for (alpha = a; alpha <= f; alpha++)
		putchar(alpha);
	putchar(NEWLINE);
	return (0);
}
