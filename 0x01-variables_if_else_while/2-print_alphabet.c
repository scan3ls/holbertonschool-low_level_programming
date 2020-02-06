#include <stdio.h>
#define A 97
#define Z 122
#define NEWLINE 10
/**
 * main - print alphabet in lowercase
 *
 * Return: Value of zero
 */
int main(void)
{
	int alpha;

	for (alpha = A; alpha <= Z; alpha++)
		putchar(alpha);
	putchar(NEWLINE);
	return (0);
}
