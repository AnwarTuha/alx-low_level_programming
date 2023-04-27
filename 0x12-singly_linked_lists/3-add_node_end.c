#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  add_node_end - adds a new node at the end of list_t
 *
 *	@head: pointer to head of list_t
 *	@str: value of str to be added
 *
 *  Return: address of new element
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tail = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new_node;

	return (new_node);
}
