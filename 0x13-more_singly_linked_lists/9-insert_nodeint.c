#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *@head: list
 *@idx: insert at index
 *@n: value of new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *iterator;
	listint_t *new;
	listint_t *temp = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	iterator = *head;
	while (idx > 1)
	{
		if (iterator == NULL)
			return (NULL);
		iterator = iterator->next;
		idx--;
	}

	temp = iterator->next;
	iterator->next = new;
	new->next = temp;

	return (new);
}
