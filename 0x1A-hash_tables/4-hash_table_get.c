#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash table
 * @key: the key of the hash table
 * Return:  value associated with the element, or NULL
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (key == NULL || strlen(key) == 0 || ht == NULL ||
		ht->array == NULL || ht->size == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
