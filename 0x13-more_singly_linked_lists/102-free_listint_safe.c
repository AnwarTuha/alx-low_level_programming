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
	size_t count = 0;
	listint_t *temp, *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			temp = slow;
			slow = slow->next;
			fast = fast->next;

			free(temp);
			count++;
		}
		free(slow);
		count++;
		*h = NULL;
		return (count);
	}

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}

	*h = NULL;

	return (count);
}
