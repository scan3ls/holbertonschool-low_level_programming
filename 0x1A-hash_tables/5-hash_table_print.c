#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *@ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	char *key, *value;
	unsigned long int i, flag = 0;
	hash_node_t *node;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			key = node->key;
			value = node->value;
			if (isString(key) && isString(value))
				printf("'%s': '%s', ", key, value);
			node = node->next;
			flag = 1;
		}
	}
	printf("%s}\n", (flag) ? "\b\b" : "");
}

/**
 * isString - checks if string contains printable characters
 *@str: string
 *
 * Return: 0 on failure, otherwise 1
 */

int isString(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] > 125)
			return (0);
	}

	return (1);
}
