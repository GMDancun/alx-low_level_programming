#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 *
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 *
 * @index: index, starting from 0 of the bit you want to set.
 *
 * @n: no.
 *
 * Return: 1 if it worked or -1 if an there is an error
 */


int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
