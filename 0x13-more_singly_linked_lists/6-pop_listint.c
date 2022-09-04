#include "lists.h"

/**
 * pop_listint - a function that deletes
 * the head node of a listint_t linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int nd;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	nd = (*head)->n;
	free(*head);
	(*head) = temp;
	return (nd);
}
