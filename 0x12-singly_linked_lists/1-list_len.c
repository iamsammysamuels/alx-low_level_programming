#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: head pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodecount = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		nodecount++;
		h = h->next;
	}
return (nodecount);
}
