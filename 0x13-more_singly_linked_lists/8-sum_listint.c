#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n).
 * @head: get the head of the link list.
 * Return: the sum of the nodes or NULL.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
