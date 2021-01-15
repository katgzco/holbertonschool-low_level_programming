#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table or NULL
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	/*edge case*/
	if (size == 0)
		return (0);

	/*allocate memory for the struct */
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	/*allocate memory for the array member of the struct*/
	new_hash->array = calloc(size, sizeof(hash_node_t));
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	/*inicializate*/
	new_hash->size = size;

	return (new_hash);
}
