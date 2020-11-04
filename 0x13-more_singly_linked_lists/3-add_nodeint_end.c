#include "lists.h"
/**
 * add_nodeint_end - add node at the beggining of the list.
 * @head: get the addres of the head.
 * @n: the value for inicializate the node.
 * Return: the addres of the new node or null.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *new = NULL;

	/*allocate memory*/
	new = malloc(sizeof(listint_t));
	/*ask for memory*/
	if (new == NULL)
		return (0);
	/*inicializate data */
	new->n = n;
	new->next = NULL;
	/* if it's the first node */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* if it's not the first node */
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
