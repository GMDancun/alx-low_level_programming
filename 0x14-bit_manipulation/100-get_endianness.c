#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 *
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *p = (char *) &e;

	return ((int)*p);
}
