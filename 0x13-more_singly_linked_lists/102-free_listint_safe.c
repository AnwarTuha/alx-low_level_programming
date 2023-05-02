#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  free_listint_safe - frees listint_t list with a loop
 *
 *	@h: pointer to the current head of a linked list
 *
 *  Return: number of freed nodes
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}

	return (size);
}
