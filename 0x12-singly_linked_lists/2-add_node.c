#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node to the beginning of a list_t list
 *@head: pointer to the current head node
 *@str: string  of the node to add
 *
 * Return: pointer to new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = _strlen(str);
	*head = temp;
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
