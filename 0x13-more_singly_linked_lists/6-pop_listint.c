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

	if ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		pop = temp->n;
		free(temp);
	}
	else
	{
		pop = (*head)->n;
		free(*head);
	}
	return (pop);
}
