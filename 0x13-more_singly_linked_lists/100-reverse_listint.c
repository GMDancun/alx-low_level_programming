#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * 
 * @head: pointer to the list.
 * 
 * Return: pointer to the first node of the reversed list
 * 
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_node, *nex_node;

	if (!head)
		return (NULL);

	rev_node = NULL;
	while (*head)
	{
		nex_node = (*head)->next;
		(*head)->next = rev_node;
	
		rev_node = *head;
		*head = nex_node;
	}
	*head = rev_node;
	return (*head);
}
