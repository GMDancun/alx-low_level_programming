#include "lists.h"

/**
 * add_dnodeint_end - Adds a new_node at the end of a dlistint_t list...
 * @head: A * to the head of the dlistint_t list....
 * @n: The int for the new_node to contain.
 *
 * Return: If the function fails - NULL. other conditions
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newnode;
	newnode->prev = last;

	return (newnode);
}
