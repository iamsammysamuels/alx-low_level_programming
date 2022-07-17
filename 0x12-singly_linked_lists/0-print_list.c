#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: head pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
