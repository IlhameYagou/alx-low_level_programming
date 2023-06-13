#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2D array of integers
 * @width: int
 * @height: int
 * Return: 2D array
 */

int **alloc_grid(int width, int height)
{
	int **res, n, m;

	res = malloc(sizeof(*res) * height);

	if (width <= 0 || height <= 0 || res == 0)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < height; n++)
		{
			res[n] = malloc(sizeof(**res) * width);
			if (res[n] == 0)
			{
				while (n++)
					free(res[n]);
				free(res);
				return (NULL);
			}

			for (m = 0; m < width; m++)
				res[n][m] = 0;
		}
	}

	return (res);
}
