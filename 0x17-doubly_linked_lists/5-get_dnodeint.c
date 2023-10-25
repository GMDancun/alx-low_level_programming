#include "lists.h"

/**
 * get_dnodeint_at_index - program that Locates...
 * node in a dlsint_t ls....
 * @head: head of the dlsint_t ls....
 * @index: node to location....
 *
 * Return: NULL
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
