#include "holberton.h"

/**
 * print_binary - converts & prints the binary number
 *@n: decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned int bit;
	int startFlag = 0;

	for (bit = 1 << 31; bit > 0; bit = bit >> 1)
	{
		if (n & bit)
		{
			_putchar('1');
			startFlag = 1;
		}
		else
		{
			if (startFlag == 1)
				_putchar('0');
		}
	}
	if (startFlag == 0)
		_putchar('0');
}
