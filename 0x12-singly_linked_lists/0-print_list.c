#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  print_list - prints value of str for each list_t given
 *
 *	@h: linked list to be printed
 *
 *  Return: count of each str printed from each node
 *
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	char *null_string = "[0](nil)";
	int i, len;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			for (i = 0; i < 8; i++)
			{
				_putchar(null_string[i]);
			}
		}
		else
		{
			len = h->len;

			_putchar('[');
			while (len > 0)
			{
				_putchar(len % 10 + '0');
				len /= 10;
			}
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i]; i++)
			{
				_putchar(h->str[i]);
			}
		}
		_putchar('\n');
		h = h->next;

		node_count++;
	}

	return (node_count++);
}
