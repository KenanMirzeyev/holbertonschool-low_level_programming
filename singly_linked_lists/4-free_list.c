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
	list_t *smth;

	while (head != NULL)
	{
		smth  = head->next;
		free(head->next);
		free(head);
		head = smth;
	}
}




