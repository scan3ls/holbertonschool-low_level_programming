#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the begging of a dlistint_t list
 *@head: the list
 *@n: value of new node
 *
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		new->n = n;
		return (new);
	}

	new->prev = NULL;
	(*head)->prev = new;
	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
