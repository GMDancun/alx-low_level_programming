#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head: points to the list
 *
 * @index: index
 *
 * Return: one if it succeeds, and -1 if it fails
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx;
	listint_t *nodeto_delete;
	listint_t *ptr = *head;

	idx = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		nodeto_delete = *head;
		*head = (*head)->next;
		free(nodeto_delete);
		return (1);
	}
	while (ptr)
	{
		if (idx == index)
		{
			nodeto_delete->next = ptr->next;
			free(ptr);
			return (1);
		}
		nodeto_delete = ptr;
		ptr = ptr->next;
		idx++;
	}
	return (-1);









}
