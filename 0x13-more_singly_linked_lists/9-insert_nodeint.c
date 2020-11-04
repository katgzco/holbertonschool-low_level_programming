#include "lists.h"
/**
 * insert_nodeint_at_index -  frees a list_t list.
 * @head: get the head of the link list.
 * @idx: the index of the node.
 * @n: the value to inicializate the node.
 * Return: the new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL, *new = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (0);
	tmp = *head;
	/*go throw the link list and check the node */
	for (count = 0; tmp != NULL && count < idx; count++)
		tmp = tmp->next;
	/*if the condition dont get the node */
	if (count != idx)
		return (0);
	/*if the condition get the node */
	new = malloc(sizeof(size_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
