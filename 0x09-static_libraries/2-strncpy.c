#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be used.
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cou_of_by;

	for (cou_of_by = 0; cou_of_by < n && src[cou_of_by] != '\0'; cou_of_by++)
		dest[cou_of_by] = src[cou_of_by];
	for (; cou_of_by < n; cou_of_by++)
		dest[cou_of_by] = '\0';
	return (dest);
}
