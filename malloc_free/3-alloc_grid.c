#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - grid
 * @width: width
 * @height: height
 *
 * Return: K
 */
int **alloc_grid(int width, int height)
{
	int **K;
	int i, o;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	K = (int **)malloc(height * sizeof(int *));
	if (K == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		K[i] = (int *)malloc(width * sizeof(int));
		if (K[i] == NULL)
		{
			for (o = 0 ; o < i ; o++)
			{
				free(K[o]);
			}
			free(K);
			return (NULL);
		}
		for (o = 0 ; o < width ; o++)
		{
			K[i][o] = 0;
		}
	}
	return (K);
}

