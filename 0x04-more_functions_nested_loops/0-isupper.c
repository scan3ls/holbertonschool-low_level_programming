#include "holberton.h"

/**
  * _isupper - checks for uppercase character
  *@c: value to be checked
  *
  * Description: Char c will be compared with the ASCII
  * value of 'a' being 96. All upper case letters
  * have values less than 'a', 96.
  *
  * Return: 1 if c is uppercase, otherwise return 0
  */

int _isupper(int c)
{
	if ( c < 'a')
			return (1);
	return (0);
}
