#include "hash_tables.h"
/**
 * key_index -  function that gives the index of a key.
 * @size: is the size of the array
 * @key: the string key of the hash table
 * Return: pointer to the newly created hash table or NULL
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
