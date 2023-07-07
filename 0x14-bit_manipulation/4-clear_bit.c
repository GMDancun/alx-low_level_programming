#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @index: index, starting from 0 of the bit you want to set.
 *
 * @n: number input.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int sett;

	if (index > 63)
		return (-1);
	sett = 1 << index;
	*n = *n & (~sett);
	return (1);
}
