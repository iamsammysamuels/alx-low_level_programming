#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the first node of the list.
 * @index: where index is the index of the node, starting at 0.
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (node_count == index)
			return (head);
		head = head->next;
		node_count++;
	}
	return (NULL);
}
