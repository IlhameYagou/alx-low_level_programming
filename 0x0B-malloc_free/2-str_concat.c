#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *_strlen - finds the length of a string
 * @s: string
 * Return: size
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - concatenates two strings.
 * @s1: input 1
 * @s2: input 2
 * Return: result of the concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int sizestr1, sizestr2, n;
	char *p;

	if (s1 == NULL)
		s1 == '\0';
	if (s2 == NULL)
		s2 == '\0';

	sizestr1 = _strlen(s1);
	sizestr2 = _strlen(s2);
	p = malloc((sizestr1 + sizestr2) * sizeof(char) + 1);
	if (p == 0)
		return (0);

	for (n = 0; n <= sizestr1 + sizestr2; n++)
	{
		if (n < sizestr1)
			p[m] = s1[m];
		else
			p[m] = s2[m - sizestr1];
	}
	p[m] = '\0';
	return (p);
}



