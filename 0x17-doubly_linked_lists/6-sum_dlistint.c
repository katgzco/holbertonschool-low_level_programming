#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list..
 * @head: The head of the link list.
 * Return:  The sum of the member n or 0 if is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h_ref = head;
	int sum_store = 0;

	if (head != NULL)
	{
		while (h_ref != NULL)
		{
			sum_store += (h_ref->n);
			h_ref = h_ref->next;
		}

		return (sum_store);
	}
	else
		return (sum_store);
}
