#include "lists.h"
/**
 * free_listint -  frees a list_t list.
 * @head: get the head of the link list.
 */
void free_listint(listint_t *head)
{
	listint_t *store = NULL;

	while (head != NULL)
	{
		store = head->next;
		free(head);
		head = store;
	}
}
