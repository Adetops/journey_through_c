#include "lists.h"

/**
 * print_listint - o8y that prints all the elements of a listint_t list.
 * @h: pointer to the head node.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
