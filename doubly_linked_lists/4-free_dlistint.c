#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
