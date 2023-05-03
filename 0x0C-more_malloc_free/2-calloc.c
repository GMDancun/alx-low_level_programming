#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: No. of elements.
 * @size: size
 * Return: Null if malloc fails or if nmemb or
 * size is 0
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k, memalloc = nmemb * size;
	char *memarr;

	if (memalloc == 0)
		return (NULL);

	memarr = malloc(nmemb * size);
	if (memarr == NULL)
		return (NULL);

	for (k = 0; k < memalloc; k++)
		memarr[k] = 0;
	return (memarr);
}
