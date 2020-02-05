#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - print a message
 *
 * Return: return a value of zero
 */
int main(void)
{
char str1[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str1, 59);
return (1);
}
