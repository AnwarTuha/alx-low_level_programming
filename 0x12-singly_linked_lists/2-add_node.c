#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  add_node - adds a new node at the beginning of list_t
 *
 *	@head: pointer to head of list_t
 *	@str: value of str to be added
 *
 *  Return: address of new element
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
