#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the lis
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int j;

	j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		j++;
		h = h->next;
	}
	return (j);
}
