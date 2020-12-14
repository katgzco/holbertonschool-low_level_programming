#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: the head of the link list.
 * @index: the index of the node.
 * Return: the new node or null.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *add_nodemid(dlistint_t **head, const int n, unsigned int idx);

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_ref = *head;

	/*check edge cases */
	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	/*check if is the first position*/
	if (index == 0)
	{
		if (h_ref->next == NULL)
		{
			free(h_ref);
			*head = NULL;
		}
		else
		{
			h_ref->next->prev = h_ref->prev;
			*head = h_ref->next;
			free(h_ref);
		}
		return (1);
	}

	while (h_ref->next != NULL && index-- !=  0)
	{
		if (index == 0 && h_ref->next != NULL)
		{
			h_ref->prev->next = h_ref->next;
			break;
		}
		h_ref = h_ref->next;
	}

	h_ref->next->prev = h_ref->next;
	free(h_ref);

	return (1);
}

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
		for (; h_reference != NULL; length++)
			h_reference = h_reference->next;
	}
	return (length);
}
