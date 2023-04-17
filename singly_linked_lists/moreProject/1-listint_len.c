#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: Pointer to the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
