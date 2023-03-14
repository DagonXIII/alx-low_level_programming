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
	int **array, i, j;
	int len = width * height;

	int size = a * b;
	int **x, i, j;

	if (size <= 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * b);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * a);
		if (x[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
	}

	for (i = 0; i < b; i++)
		for (j = 0; j < a; j++)
			x[i][j] = 0;

	return (x);
}
