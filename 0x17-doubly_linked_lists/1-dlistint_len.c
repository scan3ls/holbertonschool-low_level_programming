#include "lists.h"

/**
 * dilistint_len - returns number of elements in a dlistint_t list
 *@h: dlistint_t list
 *
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t length = 0;

	if (h == NULL)
		return (0);

	/*cycle through the list until NULL node or cycle detected*/
	temp = (dlistint_t*) h;
	while (temp != NULL && (temp < temp->next || temp->next == NULL))
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
