#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list with only int data, no strings
 */
void free_dlistint(dlistint_t *head)
{
	/* if empty list */
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
