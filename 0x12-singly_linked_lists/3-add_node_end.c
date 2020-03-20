#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the end of a list_t list
 *@head: pointer to the current head node
 *@str: string of the node to add
 *
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *tail;

	if(str == NULL)
		return (0);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
	{
		free(temp);
		return (0);
	}

	if ((*head) == NULL)
	{
		(temp)->next = NULL;
		(temp)->str = strdup(str);
		(temp)->len = _strlen(str);
		*head = temp;
		return (*head);
	}

	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = temp;

	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;

	return (temp);
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
