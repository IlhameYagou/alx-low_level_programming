#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: the array
 * @size: the size
 * @cmp: pointer to the function used to compare
 * Return: the int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && size && cmp)
		while (n < size)
		{
			if (cmp(array[n]))
				return (n);
			n++;
		}
	return (-1);
}
