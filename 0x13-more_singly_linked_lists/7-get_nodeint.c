#include "lists.h"
/**
 * get_nodeint_at_index -  frees a list_t list.
 * @head: get the head of the link list.
 * @index: the index for the nodes.
 * Return: the node of the index or null.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	/*go throw the link list and check the node */
	for (count = 0; tmp != NULL && count < index; count++)
		tmp = tmp->next;
	/*if the condition dont get the node */
	if (count != index)
		return (0);
	/*if the condition get the node */
	return (tmp);
}
