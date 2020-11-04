#include "lists.h"
/**
 * free_listint2 -  frees a list_t list.
 * @head: get the head of the link list.
 */
void free_listint2(listint_t **head)
{
	listint_t *store = NULL;

	if (*head == NULL)
		return;
	while ((*head) != NULL)
	{
		store = (*head)->next;
		free(*head);
		(*head) = store;
	}
}
