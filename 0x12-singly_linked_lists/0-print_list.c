#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *@h: list used
 *
 * Return: number of  nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		print_element(h->len, h->str);
		h = h->next;
	}
	printf("\n");
	return (n);
}

/**
 * print_element - prints a single node of a list_t list
 *@u: length
 *@s: string
 */

void print_element(unsigned int u, char *s)
{
	if (s == NULL)
	{
		printf("[0] (nill)");
	}
	else
	{
		printf("[%u] %s", u, s);
	}
}
