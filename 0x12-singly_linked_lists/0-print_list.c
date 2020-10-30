#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: get the first node.
 * Return: The number of  nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (n = 0; h != NULL; n++)
	{
		if (h == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (n);
}
