#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a *char
 *@s: source string
 *@to: target to overwrite
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	printf("target: %s\nsrc: %s\n", to, *s);
}
