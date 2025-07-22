#include <stdlib.h>
#include "lists.h"

/**
 * list_len - len
 * @h: h
 *
 * Return: a
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}

