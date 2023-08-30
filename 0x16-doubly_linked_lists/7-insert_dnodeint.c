#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a_new_node in a dlistint_t....
 *
 * @: A pointer to the head of the dlistint_t list.....
 * @idx: The position to insert the new node.....
 * @n: The integer for the new node to contain.....
 *
 * Return: If the function fails - NULL. other conditions
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
