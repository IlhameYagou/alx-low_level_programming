#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: first int
 * @max: last int
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int p, i;
	int *ptr;

	if (min > max)
		return (NULL);

	p = max - min + 1;
	ptr = malloc(sizeof(int) * p);

	if (!ptr)
		return (NULL);
	for (i = 0; i < p; i++)
		ptr[i] = min++;
	return (ptr);
}
