#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: The head of the link list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *store = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		store = head->next;
		free(head);
		head = store;
	}
}
