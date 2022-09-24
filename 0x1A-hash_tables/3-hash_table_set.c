#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * key: the key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	char *dup_key = NULL, *dup_value = NULL;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	dup_value = strdup(value);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = dup_value;
	new_node->next = NULL;
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(dup_key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = dup_value;
				free(new_node);
				return (1);
			}
			temp =temp->next;
		}
		temp = ht->array[index];
		new_node->next = temp;
		ht->array[index] = new_node;
	}
	else
	{
		ht->array[index] = new_node;
	}
	return (1);
}
