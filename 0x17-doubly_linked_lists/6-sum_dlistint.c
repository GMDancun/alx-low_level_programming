#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlsint_t ls.i...
 * @head: The head of the dlsint_t ls....
 *
 * Return: The sum of all the data....
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
