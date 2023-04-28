#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * 
 * @h: pointer to the list_t
 * 
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t j;

	j = 0;

	for (j = 0; h; j++)
	{
		h = h->next;
	}
	return (j);
}
