#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: Input 1.
 * @m: Input 2.
 *
 * Return: Number of flip in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flipbit = 0, tobe1, tobe2;

	while (!(n == 0 && m == 0))
	{
		tobe1 = n & 1;
		tobe2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (tobe1 != tobe2)
			flipbit += 1;
	}
	return (flipbit);
}
