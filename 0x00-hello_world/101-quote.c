#include <stdio.h>
/**
 * main - print a message
 *
 * Return: return a value of zero
 */
int main(void)
{
char str1[40] = "and that piece of art is useful\"\0";
char str2[40] = " - Dora Korpar, 2015-10-19\n\0";
fprintf(stderr, "%s%s", str1, str2);
return (1);
}
