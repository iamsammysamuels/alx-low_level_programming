#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: The table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index, last_ht = 0;

	if (ht)
	{
		printf("{");
		index = 0;
		while (index < ht->size)
		{
			temp = ht->array[index];
			while (temp)
			{
				if (last_ht != 0)
					printf(", ");
				last_ht = 1;
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
			index++;
		}
	}
	printf("}\n");
}
