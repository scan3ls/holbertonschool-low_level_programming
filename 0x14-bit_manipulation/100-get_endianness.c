#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little, 0 if big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
