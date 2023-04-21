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
<<<<<<< HEAD
	
=======

>>>>>>> 8dcc2f19c33acacca6d1345280d6a86bb1c43767
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
