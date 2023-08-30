#include "lists.h"

/**
 * dlistint_len - Counts the no. of elements in the linked dlistint_t list....
 * @h: the dlistint_t list.
 *
 * Return: The no. of elements in the dlistint_t list....
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t allnodes = 0;

	while (h)
	{
		allnodes++;
		h = h->next;
	}

	return (allnodes);
}
