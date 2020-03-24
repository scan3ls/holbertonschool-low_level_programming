#include "lists.h"

/**
 * free_listint - frees memory allocated for a list_t list
 *@head: list to be freed
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
