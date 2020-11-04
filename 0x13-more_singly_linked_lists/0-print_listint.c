#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: get the addres of the first node.
 * Return: the number of nodes of the list link.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
