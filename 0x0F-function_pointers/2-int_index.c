#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the array of numbers
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: the index of the array
 */

int int_index(int *array, int size, int (*cmp)(int)
{
	int j;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);

}
