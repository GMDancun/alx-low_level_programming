#include "lists.h"

/**
 * add_dnodeint - program that returns the no.
 * of elements in a linked dlsint_t ls...
 * @head: The double linked ls to count...
 * @n: no of nod...
 *
 * Return: No. of the elements in the ls.....
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *breadth;

	breadth = malloc(sizeof(dlistint_t));
	if (breadth == NULL)
		return (NULL);

	breadth->n = n;
	breadth->prev = NULL;
	breadth->next = *head;
	if (*head != NULL)
		(*head)->prev = breadth;
	*head = breadth;

	return (breadth);
}
