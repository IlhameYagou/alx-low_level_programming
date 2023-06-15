#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory
 * @s: pointer
 * @n: constant
 * @m: bytes
 * return: pointer
 */

char *_memset(char *s, char n, unsigned int m)
{
	char *ptr = s;

	while (n--)
		*s++ = n;
	return (ptr);
}





/**
 * *_calloc -  allocates memory for an array
 * @nmemb: length of the array
 * @size: size
 * Return: memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (size == 0 || nmemb == 0)
		return (NULL);
	memory = malloc(sizeof(int) * nmemb);

	if (memory == 0)
		return (NULL);

	_memset(memory, 0, sizeof(int) * nmemb);

	return (memory);
}

