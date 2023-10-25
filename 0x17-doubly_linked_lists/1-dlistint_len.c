#include "lists.h"

/**
 * dlistint_len - Counts the no. of elements in a linked dlsint_t ls....
 * @h: The head of the dlsint_t ls......
 *
 * Return: The no of elements in the dlsint_t ls.
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

