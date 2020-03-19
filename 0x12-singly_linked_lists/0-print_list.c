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
	size_t n = 1;

	while (h->next != NULL)
	{
		n++;
		print_element(h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (n);
}

void print_element(unsigned int u, char *s)
{
	if (s == NULL)
	{
		printf("[0] (nill)\n");
	}
	else
	{
		printf("[%u] %s\n", u, s);
	}
}
