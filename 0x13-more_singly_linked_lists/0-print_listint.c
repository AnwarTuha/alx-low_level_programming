#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  print_listint - prints given arguments with given format
 *
 *	@h: linked list where elements to be printed are found
 *
 *  Return: size of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (node_count++);
}
