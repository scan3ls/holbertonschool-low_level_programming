#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 *@head: list used
 *
 * Return: Sum of list
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *iterator;

	if (head == NULL)
		return (0);

	iterator = head;
	while (iterator != NULL)
	{
		sum = sum + iterator->n;
		iterator = iterator->next;
	}
	return (sum);
}
