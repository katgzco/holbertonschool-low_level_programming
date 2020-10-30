#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: get the fisrt node of the link list.
 * Return: the length of the link list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}