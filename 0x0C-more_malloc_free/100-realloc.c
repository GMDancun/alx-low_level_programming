#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that Reallocates
 * a memory block using malloc and free.
 *
 * @ptr: pointer that points to previously allocated mem.
 *
 * @old_size: size
 * @new_size: size
 *
 * Return: If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memblock;
	char *ptr_2, *buffer1;
	unsigned int index1;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memblock = malloc(new_size);

		if (memblock == NULL)
			return (NULL);

		return (memblock);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_2 = ptr;
	memblock = malloc(sizeof(*ptr_2) * new_size);

	if (memblock == NULL)
	{
		free(ptr);
		return (NULL);
	}

	buffer1 = memblock;

	for (index1 = 0; index1 < old_size && index1 < new_size; index1++)
		buffer1[index1] = *ptr_2++;

	free(ptr);
	return (memblock);
}
