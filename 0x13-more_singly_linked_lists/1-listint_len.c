#include "lists.h"
/**
 * listint_len - get the length of the link list.
 * @h: get the addres of the first node.
 * Return: the number of nodes of the list link.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	for (size = 0; h != NULL; size++)
		h = h->next;

	return (size);
}
