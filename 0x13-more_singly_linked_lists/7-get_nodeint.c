#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 *
 * @head: points to the listint_t list
 *
 * @index: index
 *
 * Return: NULL if node does not exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nnode = head;
	unsigned int n = 0;

	if (!head)
		return (NULL);
	while (nnode)
	{
		if (n == index)
			return (nnode);
		nnode = nnode->next;
		n++;
	}
	return (NULL);


}
