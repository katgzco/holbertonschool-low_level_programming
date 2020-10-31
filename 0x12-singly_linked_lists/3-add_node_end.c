#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: get the direction of the first node.
 * @str: get the string from the main.
 * Return: the direction of the new element or 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *last = *head;
	/* allocate memory */
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);
	/*length of the string to allocate memory */
	for (i = 0; *(str + i) != '\0'; i++)
		;
	new->str = malloc(sizeof(i + 1));
	if (!new->str)
	{
		free(new);
		return (0);
	}
	/*put data*/
	new->str = strdup(str);
	new->len = i;
	/* the new node points to null */
	new->next = NULL;
	/* move the heado to point to the new node */
	if (*head == NULL)
	{
		*head  = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
