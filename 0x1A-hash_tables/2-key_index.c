#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 *@key: key of a table
 *@size: Size of the array of the table
 *
 * Return: index where the key/value is stored
 *	in the array of the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
