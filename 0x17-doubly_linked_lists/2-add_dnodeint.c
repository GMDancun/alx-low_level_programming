#include "lists.h"

/**
 * add_dnodeint - + node at the beginning of a dlistint_t list....
 * @head: * to the head of the dlistint_t list....
 * @n: The int for the new_node to contain....
 *
 * Return: If the function fails - NULL.... other conditions
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
