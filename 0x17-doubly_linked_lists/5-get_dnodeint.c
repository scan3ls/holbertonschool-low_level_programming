#include "lists.h"

/**
 * get _dnodeint_at_index - returns the nth node of a dlistint_t list
 *@head: list
 *@index: desired index of a dlistint_t list
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	temp = head;

	for (counter = 0; counter < index; counter++)
		temp = temp->next;

	return (temp);
}
