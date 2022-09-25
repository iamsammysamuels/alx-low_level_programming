#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: The hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *nxt;
	unsigned long int index;

	if (ht)
	{
		if (ht->array)
		{
			for (index = 0; index < ht->size; index++)
			{
				if (ht->array[index])
				{
					curr = ht->array[index];
					while (curr)
					{
						nxt = curr->next;
						if (curr->key)
							free(curr->key);
						if (curr->value)
							free(curr->value);
						free(curr);
						curr = nxt;
					}
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
