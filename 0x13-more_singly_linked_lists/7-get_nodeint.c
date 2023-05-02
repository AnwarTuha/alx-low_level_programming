#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  get_nodeint_at_index - gets the required node from a given linked list
 *
 *	@head: pointer to the current head of a linked list
 *	@index: index of the location of the node
 *
 *  Return: required node of listint_t
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}

	return (NULL);
}
