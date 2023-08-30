#include "lists.h"

/**
 * sum_dlistint - Sums_all the data of a dlistint_t list....
 * @head: The ^ of the dlistint_t list......
 *
 * Return: The sum_total of all the data.....
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_total = 0;

	while (head)
	{
		sum_total += head->n;
		head = head->next;
	}

	return (sum_total);
}
