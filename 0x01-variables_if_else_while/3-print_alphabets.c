#include <stdio.h>
#define a 97
#define z 122
#define A 65
#define Z 90
#define NEWLINE 10
/**
 * main - print alphabet in lowercase
 *
 * Return: Value of zero
 */
int main(void)
{
	int alpha;

	for (alpha = a; alpha <= z; alpha++)
		putchar(alpha);
	for (alpha = A; alpha <= Z; alpha++)
		putchar(alpha);
	putchar(NEWLINE);
	return (0);
}
