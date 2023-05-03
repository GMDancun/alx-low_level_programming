#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end of a listint_t list
 *
 * @head: points to the list
 *
 * @n: node
 *
 * Return: the address of the new element, or Null if it fails.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *endnode;

	endnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (endnode->next != NULL)
		endnode = endnode->next;
	endnode->next = newnode;
	
	return (endnode);

}
