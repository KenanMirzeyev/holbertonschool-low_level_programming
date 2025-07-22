#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding node
 * @head: main
 * @str: str
 *
 * Return: b
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *b;
	unsigned int l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	b = malloc(sizeof(list_t));
	if (b == NULL)
	{
		return (NULL);
	}
	b->str = strdup(str);
	if (b->str == NULL)
	{
		free(b);
		return (NULL);
	}
	while (str[l])
	{
		l++;
	}

	b->len = l;
	b->next = *head;
	*head = b;

	return (b);
}

