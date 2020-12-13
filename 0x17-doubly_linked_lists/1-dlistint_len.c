#include "lists.h"
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
		while (h_reference != NULL)
		{
			length++;
			h_reference = h_reference->next;
		}
	}
	return (length);
}
