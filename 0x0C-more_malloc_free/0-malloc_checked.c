#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  allocates memory using malloc.
 * @b: int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
