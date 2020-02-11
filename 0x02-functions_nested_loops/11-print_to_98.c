#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: starting point
 *
 * Return: void
 */

void print_to_98(int n)
{
	do {
		if (n == 98)
		{
			printf("%d", n);
			count++;
			break;
		}

		if (n > 98)
			printf("%d, ", n--);
		else
			printf("%d, ", n++);
		count++;
	} while (1);

	putchar('\n');
}
