#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 *@head: list
 *@index: target node
 *
 * Return: pointer to the target index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target;

	if (head == NULL)
		return (NULL);
	target = head;
	while (index > 0)
	{
		if (target->next == NULL)
		{
			return (NULL);
		}
		target = target->next;
		index--;
	}
	return (target);
}
