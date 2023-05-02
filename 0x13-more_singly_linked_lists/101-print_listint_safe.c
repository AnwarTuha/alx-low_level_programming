#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

#define MAX_NODES 1000

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
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast && count < MAX_NODES)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
				count++;
			}
			if (count < MAX_NODES)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				count++;
			}
			return (count);
		}
	}

	while (head && count < MAX_NODES)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}
