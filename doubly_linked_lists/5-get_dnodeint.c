#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets
 * @head: head
 * @index: index
 *
 * Return: a
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL)
	{
		if (a == index)
		{
			return (head);
		}
		head = head->next;
		a++;
	}

	return (NULL);
}

