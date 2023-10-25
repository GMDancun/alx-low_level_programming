#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlsint_t...
 * at a given index...
 * @head: A pointer to the head of the dlsint_t...
 * @index: The index of the-node to delete....
 *
 * Return: -1 Upon success.
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpin = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmpin == NULL)
			return (-1);
		tmpin = tmpin->next;
	}

	if (tmpin == *head)
	{
		*head = tmpin->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmpin->prev->next = tmpin->next;
		if (tmpin->next != NULL)
			tmpin->next->prev = tmpin->prev;
	}

	free(tmpin);
	return (1);
}
