#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the lists containing elements.
 *
 * Return: the number of elements in a node.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
//		if (!(h->str))
//			printf("[0] (nil)\n");
//		else
//			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
