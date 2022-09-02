#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: pointer that stores the address of the head pointer.
 * @n: the data to be stored in the new element.
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	tmp->prev = new_node;
	*head = new_node;
	new_node->next = tmp;
	return (new_node);
}
