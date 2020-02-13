#include "holberton.h"

/**
  * _isupper - checks if value is a digit
  *@c: value to be checked
  *
  * Description: Int c will be compared with the ASCII
  * value of '0', 48, and '9', 57. Any values outside
  * this range is not a digit.
  *
  * Return: 1 if c is a digit, otherwise return 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
