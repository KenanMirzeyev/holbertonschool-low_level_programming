#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints
 * @h: h
 *
 * Return: r
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t r = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		r++;
	}
	return (r);
}


