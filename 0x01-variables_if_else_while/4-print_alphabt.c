#include <stdio.h>
#define a 97
#define z 122
#define q 113
#define e 101
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
	{
		if (alpha != q && alpha != e)
			putchar(alpha);
	}
	putchar(NEWLINE);
	return (0);
}
