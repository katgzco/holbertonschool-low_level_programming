#include "hash_tables.h"
/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: Hash table
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp_node = NULL;
	hash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] != NULL)
			{
				tmp = ht->array[index];
				while (tmp != NULL)
				{
					free(tmp->key);
					free(tmp->value);
					tmp_node = tmp->next;
					free(tmp);
					tmp = tmp_node;
				}
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
