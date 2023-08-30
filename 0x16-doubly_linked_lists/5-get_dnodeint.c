#include "lists.h"

/**
 * get_dnodeint_at_index - Locatea_node in a dlistint_t list....
 * @head: The ^ of the dlistint_t list....
 * @index: The_node tobellocated....
 *
 * Return: If the node does not exist - NULL. other conditions...
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
