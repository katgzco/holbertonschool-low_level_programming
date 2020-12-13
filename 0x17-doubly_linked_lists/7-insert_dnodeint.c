#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *add_nodemid(dlistint_t **head, const int n, unsigned int idx);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * insert_dnodeint_at_index - check the position to insert the node.
 * @h: the head of the link list.
 * @n: the value of the member n.
 * @idx: the index of the node.
 * Return: the new node or null.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_ref = NULL, *new_node = NULL;

/*check if the index is greather than the list*/
	if (dlistint_len(*h) < idx)
		return (NULL);

/*check if is the first element*/
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

/*check if is the last element*/
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

/*insert between nodes*/
	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;

	head_ref = get_dnodeint_at_index(*h, idx);

	head_ref = head_ref->prev;
	head_ref->next->prev = new_node;
	new_node->next = head_ref->next;
	head_ref->next = new_node;
	new_node->prev = head_ref;

	return (new_node);
}

/**
 * get_dnodeint_at_index - adds a new node at the end of a dlistint_t list.
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
		return (NULL);
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
		while (h_reference != NULL)
		{
			length++;
			h_reference = h_reference->next;
		}
	}
	return (length);
}
