#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: points to the list
 *
 *
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	head = NULL;
}
