#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 *@h: head of the  list
 *
 * Return: length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t length = 0;

	if (h == NULL)
		return (0);

	/*cycle through the list until NULL node or cycle detected*/
	temp = (dlistint_t*) h;
	while (temp != NULL && (temp < temp->next || temp->next == NULL))
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}
	return (length);
}
