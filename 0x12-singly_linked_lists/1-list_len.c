#include "lists.h"

/**
 * list_len - list_t linked list length gets to be printed
 * @h: linked list
 * Return: number of nodes (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
