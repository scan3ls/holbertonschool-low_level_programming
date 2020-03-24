#include "lists.h"

/**
 * listint_len - return the number of elements in a listint_t list
 *@h: listint_t list
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
