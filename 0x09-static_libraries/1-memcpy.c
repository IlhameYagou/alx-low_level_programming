#include "main.h"

/**
 * *_memcpy -  copies memory area.
 * @n: function copied
 * @src: bytes from memory area
 * @dest: destination memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
