#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The head of the link list.
 * @n: the value for inicializate the node.
 * Return:  The new node or Null.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h_reference = *head;
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
	/*inicizalition of the new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (h_reference->next != NULL)
		h_reference = h_reference->next;

	/*assign the new point value*/
	h_reference->next = new_node;
	new_node->prev = h_reference;

	return (new_node);
}
