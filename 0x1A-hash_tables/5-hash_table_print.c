#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: Hash table
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, num_nodes = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (num_nodes > 0)
					printf(", ");
				printf("%s : %s", tmp->key, tmp->value);
				num_nodes++;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
