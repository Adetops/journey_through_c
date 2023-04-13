#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: a pointer to the address of string.
 * @str: the string to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned i;
	list_t *new;
	list_t *last = *head;

	i = 0;
	while (str[i])
	{
		i++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (*head);
}
