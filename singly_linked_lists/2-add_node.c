#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adding node
 * @head: main
 * @str: str
 *
 * Return: b
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t b = 0;

	while (head != NULL)
	{
		if(head->str == NULL)
		{
			printf("%u %d\n", head->str);
		}
	head = head->str;
	b++;
	}
	return (b);
}

