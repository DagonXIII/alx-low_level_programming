#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2D array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int size = width * height;
	int **x, i, j;

	if (size <= 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			x[i][j] = 0;

	return (x);
}
