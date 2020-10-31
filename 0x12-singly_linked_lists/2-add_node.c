#include "lists.h"

/**
 * add_node - dds a new node at the beginning of a list_t list.
 * @head: Get the new node for allocate of the first node.
 * @str: get a pointer to a string.
 * Return: The addres of the new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
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
	/*make next to the node as head */
	new->next = (*head);
	/* move the heado to point to the new node */
	(*head) = new;
	return (new);
}
