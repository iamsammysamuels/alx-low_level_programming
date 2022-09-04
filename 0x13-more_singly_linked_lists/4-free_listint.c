#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer to the first node of the list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *curr;

	curr = head;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
}
