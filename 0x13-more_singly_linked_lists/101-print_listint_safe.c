#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  _r - reallocates memory for an array of pointers
 *
 *	@list: previous list to append
 *	@size: size of new list
 *	@n: node to be added
 *
 *  Return: new node
 *
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *n)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
	{
		newlist[i] = list[i];
	}

	newlist[i] = n;

	free(list);

	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **current = NULL;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == current[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);

				free(current);

				return (count);
			}
		}
		count++;

		current = _r(current, count, head);

		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
	}

	free(current);

	return (count);
}
