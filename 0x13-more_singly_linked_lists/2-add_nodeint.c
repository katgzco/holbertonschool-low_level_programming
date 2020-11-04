#include "lists.h"
/**
 * add_nodeint - add node at the beggining of the list.
 * @head: get the addres of the head.
 * @n: the value for inicializate the node.
 * Return: the addres of the new node or null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* allocate memory */
	listint_t *new = malloc(sizeof(listint_t));

	/* ask if malloc get memory */
	if (!new)
	return (0);

	/*inicializate new nodo */
	new->n = n;

	/* make the next node as head */
	new->next = (*head);

	/*head point to the new node */
	(*head) = new;

	return (new);
}
