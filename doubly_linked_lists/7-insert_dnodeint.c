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
	dlistint_t *hello, *c = *h;
	unsigned int a = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (c != NULL && a < idx - 1)
	{
		c = c->next;
		a++;
	}
	
	if (c == NULL)
	{
		return (NULL);
	}
	
	if (c->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	hello = malloc(sizeof(dlistint_t));

	if (hello == NULL)
	{
		return (NULL);
	}

	hello->n = n;
	hello->prev = c;
	hello->next = c->next;

	c->next->prev = hello;
	c->next = hello;

	return (hello);
}


