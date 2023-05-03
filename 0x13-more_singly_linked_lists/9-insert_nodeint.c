#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position
 *
 * @head: list head
 * @idx: index
 * @n: node data
 *
 * Return: the address of the new node, or NULL if it fails
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *next;
	listint_t *prev;
	unsigned int k;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	next = *head;

	for (k = 0; k < idx && next; k++)
	{
		prev = next;
		next = next->next;
	}

	if (k == idx)
	{
		newnode->n = n;
		newnode->next = next;
		if (k != 0)
			prev->next = newnode;
		else
			*head = newnode;
	}
	else
	{
		return (NULL);
	}
	return (newnode);
}
