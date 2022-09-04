#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: poiter that stores the address of the pointer to the
 * first node of the linked list.
 * @index: the index of the node that should be deleted. Index starts at 0.
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *curr2;
	unsigned int node = 0;

	if (!*head || !head)
	{
		curr = curr2 = NULL;
		return (-1);
	}

	curr2 = *head;

	if (index == 0)
	{
		if (!curr2->next)
		{
			free(curr2);
			*head = curr2 = curr = NULL;
			return (1);
		}
		else if (curr2->next)
		{
			curr = curr2;
			curr2 = curr2->next;
			free(curr);
			*head = curr2;
			curr = NULL;
			return (1);
		}
	}

	curr2 = *head;

	while (curr2)
	{
		if (index == node)
		{
			curr->next = curr2->next;
			free(curr2);
			curr2 = NULL;
			curr = *head;
			return (1);
		}
		curr = curr2;
		curr2 = curr2->next;
		node++;
	}
	return (-1);
}
