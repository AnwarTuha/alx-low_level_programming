#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  print_list - prints value of str for each list_t given
 *
 *	@h: linked list to be printed
 *
 *  Return: count of each str printed from each node
 *
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (node_count++);
}
