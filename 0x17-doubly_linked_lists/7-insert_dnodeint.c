#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *@h: given list
 *@idx: target position
 *@n: new node value
 *
 * Return: address of the new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int counter;

	if (new == NULL)
		return (NULL);

	if (*h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	temp = *h;
	for (counter = 0; counter < (idx - 1) && temp != NULL; counter++)
		temp = temp->next;
	new->prev = temp;
	new->next = temp->next;
	new->n = n;
	temp->next = new;
	return (new);
}
