#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - function that returns a pointer to a
  * 2 dimensional array of integers
  * @width: int size width
  * @height: int size height
  *
  * Return: NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int **addgrid;
	int i, m;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	addgrid = malloc(height * sizeof(*addgrid));
	if (addgrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		addgrid[i] = malloc(width * sizeof(**addgrid));
		if (addgrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(addgrid[i]);
			free(addgrid);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			addgrid[i][m] = 0;
	}

	return (addgrid);
}
