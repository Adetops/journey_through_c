#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:
 * @str:
 *
 * Return:
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned i;
	list_t *new;

	i = 0;
	while (str[i])
	{
		i++;
	}

	new = malloc(sizeof(list_t));
	new->str = &str;
	new->len = i;
	new->next = NULL;

	free(new);
}
