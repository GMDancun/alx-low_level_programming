#include <stdio.h>
#include <stdlib.h>
#include "function_pointers"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the array of numbers
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: the index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int j;

    if (size <= 0)
        return (-1);
    if (!array || !cmp)
        return (-a);
    for (j = 0; j < size; j++)
    {
        if (cmp(*(array + j) != 0)
                return (i);

    }
    return (-1);
}
