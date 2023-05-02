#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  pop_listint - deletes the head node of a given linked list
 *
 *	@head: pointer to the current head of a linked list
 *
 *  Return: data n of the head node
 *
 */
int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = *head;
	n_data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (n_data);
}
