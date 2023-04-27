#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  _print_digits - prints digits of given number
 *
 *	@n: number to be printed
 *
 *  Return: void
 *
 */
void _print_digits(int n)
{
	if (n > 9)
	{
		_print_digits(n / 10);
	}

	_putchar(n % 10 + '0');
}

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

	while (h->next != NULL)
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
			_print_digits(len);
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i]; i++)
			{
				_putchar(h->str[i]);
			}
		}
		_putchar('\n');

		if (h->next == NULL)
			break;

		h = h->next;

		node_count++;
	}

	return (node_count++);
}
