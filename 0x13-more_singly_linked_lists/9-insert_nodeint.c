#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position.
 * @head: poiner to the first node of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: data to be added to the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int node = 0;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!head || !*head)
	{
		new_node = *head;
		return (new_node);
	}

	temp = *head;

	while (temp)
	{
		if (idx == 0)
		{
			new_node->next = temp;
			temp = new_node;
			*head = temp;
		}
		else if (node == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		node++;
	}
	return (NULL);
}
