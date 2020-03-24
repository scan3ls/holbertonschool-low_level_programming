#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t list
 *@head: start of the list
 *
 * Return: Value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	pop = temp->n;
	*head = (*head)->next;
	free(temp);
	return (pop);
}
