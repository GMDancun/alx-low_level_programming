#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list
 *
 * @head: points to the list
 *
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);

}
