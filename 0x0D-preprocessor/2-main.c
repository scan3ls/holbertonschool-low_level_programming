#include <stdio.h>

/**
 * main - print name of compile .c file
 *
 * Return: void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
