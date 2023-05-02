#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  sum_listint - gets the required node from a given linked list
 *
 *	@head: pointer to the current head of a linked list
 *
 *  Return: required node of listint_t
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
