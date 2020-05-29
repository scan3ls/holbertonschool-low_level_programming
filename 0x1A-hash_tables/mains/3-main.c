#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int i;
	hash_node_t *node;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "joyful", "yes");
	hash_table_set(ht, "synaphea", "no");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				printf("\tKey: %s\n\tValue: %s\n", node->key, node->value);
				node = node->next;
			}
		}

	}
	return (EXIT_SUCCESS);
}
