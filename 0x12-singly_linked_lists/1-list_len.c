#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 *@h: list used
 *
 * Return: number of  nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 1;

	while (h->next != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
