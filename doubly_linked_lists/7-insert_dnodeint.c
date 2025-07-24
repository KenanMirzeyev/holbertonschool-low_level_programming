#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - i
 * @h: h
 * @idx: idx
 * @n: n
 *
 * Return: temp
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *c = *h;
	unsigned int a = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (c && a < idx - 1)
	{
		c = c->next;
		a++;
	}

	if (!c)
		return (NULL);

	if (!c->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = c;
	new_node->next = c->next;
	c->next->prev = new_node;
	c->next = new_node;

	return (new_node);
}


