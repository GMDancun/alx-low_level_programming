#include "lists.h"

/**
 * free_dlistint - program that frees a linked dlsint_t ls....
 * @head: head of the dlsint_t ls....
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head)
	{
		currentNode = head->next;
		free(head);
		head = currentNode;
	}
}
