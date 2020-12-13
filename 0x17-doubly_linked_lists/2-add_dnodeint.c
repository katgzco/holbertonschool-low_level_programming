#include "lists.h"
/**
 * add_dnodeint - returns the number of elements in a linked dlistint_t list.
 * @head: The head of the link list.
 * @n: the value for inicializate the node.
 * Return:  The new node or Null.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = (*head);
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
