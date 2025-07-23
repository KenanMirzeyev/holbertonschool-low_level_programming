#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - len
 * @h: h
 *
 * Return: r
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}
	return (r);
}

