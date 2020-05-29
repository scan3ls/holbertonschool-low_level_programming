#include "hash_tables.h"

/**
 * hash_table_create - creates a hash_table_t
 *@size: size of the array
 *
 * Return: pointer to the new hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(hash_node_t *) * (size));

	table->size = size;

	for (i = 0; i < size; i++)
	{
		*(array + i) = NULL;
	}

	table->array = array;
	return (table);
}
