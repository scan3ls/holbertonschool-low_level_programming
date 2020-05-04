#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a dlistint_t list
 *@head: list
 *
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
