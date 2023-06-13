#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *q;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	q = malloc(size * sizeof(*str) + 1);

	if (q == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			q[i] = str[i];
	}
	return (q);
}
