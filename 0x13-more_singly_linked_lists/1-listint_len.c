#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  listint_len - prints the node count of a given linked list
 *
 *	@h: linked list to be counted
 *
 *  Return: size of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		node_count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (node_count++);
}
