#include "lists.h"

/**
 * add_dnodeint - program that adds a new-node at the beginning of a dlsint_t ls....
 * @head: * to the head of thedlistint_t ls...
 * @n: int for the new-node to contain....
 *
 * Return:  the address-of the new-element, 
 * or NULL if it failed....
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *last;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = n_node;
	n_node->prev = last;

	return (n_node);
}
