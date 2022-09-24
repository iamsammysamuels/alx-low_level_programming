int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_dup = NULL, *key_dup = NULL;
	hash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		tmp_node = (ht->array)[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key_dup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_dup;
				free(key_dup);
				free(new_node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = (ht->array)[index];
		new_node->next = tmp_node;
		(ht->array)[index] = new_node;
	}
	else
		(ht->array)[index] = new_node;
	return (1);
}
