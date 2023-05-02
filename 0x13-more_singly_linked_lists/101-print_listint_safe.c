#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  print_listint_safe - prints listint_t linked list
 *
 *	@head: pointer to the current head of a linked list
 *
 *  Return: number of nodes printed
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *slow;
	const listint_t *fast;

	if (head == NULL)
	{
		exit(98);
	}

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	return (count);

}
