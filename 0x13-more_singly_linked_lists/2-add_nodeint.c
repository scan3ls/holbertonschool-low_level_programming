#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 *@head: start of the list
 *@n: number value to add
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (head == NULL)
		*head = temp;
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
