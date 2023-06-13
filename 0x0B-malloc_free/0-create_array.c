#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars, and initializes it
 * with a specific char.
 * @size: array size
 * @c: character to initialize
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);

	while (size--)
		p[size] = c;

	return (p);
}
