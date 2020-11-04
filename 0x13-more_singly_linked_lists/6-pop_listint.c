#include "lists.h"
/**
 * pop_listint -  frees a list_t list.
 * @head: get the head of the link list.
 * Return: the addres of the node or NULL.
 */
int pop_listint(listint_t **head)
{
	listint_t *store_addres = NULL;
	int store_int = 0;
	if (head == NULL)
		return (0);

	store_int = (*head)->n;
	store_addres = (*head)->next;
	free(*head);
	(*head) = store_addres;
	head = NULL;

	return (store_int);
}
