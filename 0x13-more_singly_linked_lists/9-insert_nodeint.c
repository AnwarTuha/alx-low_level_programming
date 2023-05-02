#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  insert_nodeint_at_index - adds a node to the end of the given linked list
 *
 *	@head: pointer to the current head of a linked list
 *  @idx: the index at which the new node is entered
 *	@n: value of n in the new node
 *
 *  Return: the new linked list with added node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
