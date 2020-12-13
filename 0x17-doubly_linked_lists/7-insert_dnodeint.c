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
	dlistint_t *check_return = NULL;

/*check if is the first element*/
	if (idx == 0)
	{
		check_return = add_dnodeint(h, n);
		if (check_return != NULL)
			return (check_return);
	}

/*creat the node in the between node or in the end*/
	check_return = add_nodemid(h, n, idx);
	{
		if (check_return != NULL)
			return (check_return);
	}

	return (NULL);
}

/**
 * add_nodemid - creates a new node betweent the give position of two nodes.
 * @head: the head of the link list.
 * @n: the value of the member n.
 * @idx: the index of the node.
 * Return: the new node or null.
 */

dlistint_t *add_nodemid(dlistint_t **head, const int n, unsigned int idx)
{
	dlistint_t *head_ref = *head, *head_ref_aux = *head, *new_node = NULL;
	dlistint_t *check_return = NULL;

	head_ref = get_dnodeint_at_index(head_ref, idx);
	if (head_ref == NULL)
		return (NULL);

/*check if is the last position, and inserts*/
	if (head_ref->next == NULL)
	{
		check_return = add_dnodeint_end(&head_ref, n);
		return (check_return);
	}
/*if is the middle*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

/*insert between nodes*/
	head_ref = head_ref->prev;
	head_ref_aux = head_ref->next;
	head_ref->next = new_node;
	head_ref_aux->prev = new_node;
	new_node->next = head_ref_aux;
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
