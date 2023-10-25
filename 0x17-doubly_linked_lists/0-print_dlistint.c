#include "lists.h"

/**
 * print_dlistint - a program that prints * the elements of...
 * a double linked list...
 * @h
 * 
 * Return: The number of the nodes of the double-linked list...
 */
size_t print_dlistint(const dlistint_t *h)
{
    int breadth = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        ++breadth;
        h = h->next;
    }

    return (breadth);
}
