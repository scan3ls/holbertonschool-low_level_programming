#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 *@head: start of the list
 *@n: number value to add
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *tail; /*Used to find tail*/

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		tail = *head;
		while(tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = temp;
		tail = temp;
	}
	return (tail);
}
