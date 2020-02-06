#include <stdio.h>
#define A 97
#define Z 122
#define NEWLINE 10
/**
 * main - print alphabet in lowercase in reverse
 *
 * Return: Value of zero
 */
int main(void)
{
	int alpha;

	for (alpha = Z; alpha >= A; alpha--)
		putchar(alpha);
	putchar(NEWLINE);
	return (0);
}
