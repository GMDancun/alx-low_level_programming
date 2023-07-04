#include "lists.h"

/**
 *  print_listint_safe - function that prints a  linked list.
 *  @head: pointer to the list.
 *
 *  Return: number of nodes in the list.
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodelist = 0;
	const listint_t *n_node = head;

	if (!head)
		exit(98);

	while (n_node)
	{
		printf("[%p] %i\n", (void *)n_node, n_node->n);
		n_node = n_node->next;
		nodelist++;
	}
	return (nodelist);
}
