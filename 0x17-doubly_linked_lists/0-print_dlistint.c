#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The head of the link list.
 * Return:  the length of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *h_reference = h;

	if (h != NULL)
	{
		while (h_reference != NULL)
		{
			printf("%d\n", h_reference->n);
			length++;
			h_reference = h_reference->next;
		}
	}
	return (length);
}
