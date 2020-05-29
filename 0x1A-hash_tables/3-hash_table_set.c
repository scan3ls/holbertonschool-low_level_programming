#include "hash_tables.h"

/**
 * hash_table_set - adds and element to the hash table
 *@ht: hash table
 *@key: key of the table
 *@value: value associated with the key
 *
 * Return: 1 on success, 0 on failue
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size;
	unsigned long int index;
	hash_node_t *hashIndex, *node, *prev, *new;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	hashIndex = ht->array[index];
	node = hashIndex;
	new = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		node = new;
		ht->array[index] = node;
	}
	else
	{
		while (node != NULL)
		{
			prev = node;
			if (strcmp(node->key, key) == 0)
				break;
			node = node->next;
		}
		node = new;
		prev->next = node;
	}

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	return (1);
}
