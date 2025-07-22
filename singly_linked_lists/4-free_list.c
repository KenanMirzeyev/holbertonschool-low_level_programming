#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - free the list
 * @head: head
 *
 * Return: smth
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp  = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}




