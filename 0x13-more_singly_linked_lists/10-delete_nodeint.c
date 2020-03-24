#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 *@head: list used
 *@index: target index
 *
 * Return: 1 if success,  -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter = 0;
	listint_t *last;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (counter < index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		counter++;
	}
	last = temp->next;
	temp->next = last->next;
	free(last);
	return (1);
}
