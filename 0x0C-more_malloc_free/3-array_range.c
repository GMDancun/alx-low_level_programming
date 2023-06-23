#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function that creates array of integers
 *
 * @min: min val to contain
 * @max: max val to contain
 * Return: points to new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int k;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (k = 0; k <= max - min; k++)
		arr[k] = min + k;
	return (arr);
}
