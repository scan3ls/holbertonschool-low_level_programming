#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add new node a the end of a list_t list
 *@head: start of the list
 *@str: string element of the node in list_t list
 *
 * Return: pointer to current node
 */

list_t *add_node_end(list_t **head, const char *str)
{
       	if (head == NULL)
	{
		printf("no\n");
	}
	else
		printf("[%u] %s\n", _strlen(str), str);

	return (*head);
}

/**
 * _strlen - get len of string
 *@str: string counted
 *
 * Return: length
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
