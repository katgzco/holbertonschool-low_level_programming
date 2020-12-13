#include "lists.h"
/**
 * get_dnodeint_at_inde - adds a new node at the end of a dlistint_t list.
 * @head: The head of the link list.
 * @index: theindex of the node to search.
 * Return:  The new node or Null.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_ref = head;
	unsigned int counter = 0;

	for (counter = 0; head_ref->next != NULL && counter < index; counter++)
		head_ref = head_ref->next;

	if (counter == index)
		return (head_ref);
	else
		return(NULL);
}