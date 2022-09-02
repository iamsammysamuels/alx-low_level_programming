#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
