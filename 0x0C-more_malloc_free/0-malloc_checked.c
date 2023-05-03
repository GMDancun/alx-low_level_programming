#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 *
 * @b: bytes to be stored on the memory
 *
 * Return: a pointer to the memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
