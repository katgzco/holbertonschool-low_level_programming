#include "lists.h"
/**
 * get_dnodeint_at_index - adds a new node at the end of a dlistint_t list.
 * @head: The head of the link list.
 * @index: theindex of the node to search.
 * Return:  The new node or Null.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_ref = head;
	unsigned int counter = 0;

	if (head == NULL || index >= dlistint_len(head))
		return (NULL);

	for (counter = 0; head_ref->next != NULL && counter < index; counter++)
		head_ref = head_ref->next;

	if (counter == index)
		return (head_ref);
	else
		return (NULL);
}

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: The head of the link list.
 * Return:  the length of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *h_reference = h;

	if (h != NULL)
	{
		for (; h_reference != NULL; length++)
			h_reference = h_reference->next;
	}
	return (length);
}
