#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *@ht: hast table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_hash_index(ht, i);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_index - frees and index of a hash table
 *@ht: hash table
 *@index: index of hash table
 */

void free_hash_index(hash_table_t *ht, unsigned long int index)
{
	hash_node_t *temp, *node;

	node = ht->array[index];
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	free(node);
	ht->array[index] = NULL;
}
