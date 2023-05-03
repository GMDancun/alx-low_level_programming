#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: points to the list
 *
 * Return: 0 if list is empty
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (sum);

	sum = head->n + sum_listint(head->next);

	return (sum);
}
