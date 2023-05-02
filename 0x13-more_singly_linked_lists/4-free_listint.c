#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  free_listint - frees a given linked list
 *
 *	@head: pointer to the current head of a linked list
 *
 *  Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
