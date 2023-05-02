#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  add_nodeint_end - adds a node to the end of the given linked list
 *
 *	@head: pointer to the current head of a linked list
 *	@n: value of n in the new node
 *
 *  Return: the new linked list with added node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
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
