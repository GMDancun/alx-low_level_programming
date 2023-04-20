#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: function to execute a function
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t j;

    if (array && action)
        for (j = 0; j < size; j++)
            action(*(array + i));
}
