#include "lists.h"

/**
 * free_dlistint - Free a linked dlistint_t list.....
 * @head: The ^ of the dlistint_t list....
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1;

	while (head)
	{
		temp1 = head->next;
		free(head);
		head = temp1;
	}
}
