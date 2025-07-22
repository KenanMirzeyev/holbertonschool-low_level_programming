#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add nodes at the end
 * @head: head
 * @str: str
 *
 * Return: d
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *d, *f;
	unsigned int l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	d = malloc(sizeof(list_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->str = strdup(str);
	if (d->str == NULL)
	{
		free(d);
		return (NULL);
	}
	while (str[l])
	{
		l++;
	}
	d->len = len;
	d->next = NULL;

	if (*head == NULL)
	{
		*head = d;
	}
	else
	{
		f = *head;
		while (f->next == NULL)
		{
			f = f->next;
		}
		f->next = d;
	}
	return (d);
}


