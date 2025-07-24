#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete
 * @head: h
 * @index: idx
 *
 * Return: new_node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c;
	unsigned int a = 0;

	if (head == NULL || *head == NULL)
		return (1);

	c = *head;

	if (index == 0)
	{
		*head = c->next;
		if (head != NULL)
			(*head)->prev = NULL;
		free(c);
		return (1);
	}

	while (c != NULL && a < index)
	{
		c = c->next;
		a++;
	}

	while (c == NULL)
		return (1);
	if (c->prev != NULL)
		c->prev->next = c->next;
	if (c->next != NULL)
		c->next->prev = c->prev;

	free(c);
	return (1);
}



