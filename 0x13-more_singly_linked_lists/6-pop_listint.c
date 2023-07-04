#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 *
 * @head: points to the linked list
 *
 * Return: the head node's data (n)
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *headnode;
	int n;

	if (*head)
	{
		n = (*head)->n;
		headnode = (*head)->next;
		free(*head);
		*head = headnode;
		return (n);
	}
	return (0);

}
