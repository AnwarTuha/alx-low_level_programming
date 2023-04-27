#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "lists.h"

/**
 *  list_len - prints value of len for each list_t given
 *
 *	@h: linked list to be printed
 *
 *  Return: length of elements of list_t
 *
 */
size_t list_len(const list_t *h)
{
	return (h->len);
}
