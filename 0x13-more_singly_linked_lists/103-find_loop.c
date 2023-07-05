#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the 
 * loop in a linked list
 *
 *
 * @head: pointer that points to the start of the list
 *
 * Return: the address of the node where the loop starts, or NULL if
 * no loop. 
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		temp_hold = head;
		head = head->next;
		if (temp_hold < head)
			return (head);
	}
	return (NULL);
}
