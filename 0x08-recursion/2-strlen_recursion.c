#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string pointer
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int strlength = 0;

	if (*s)
	{
		strlength++;
		strlength += _strlen_recursion(s + 1);
	}
	return (strlength);
}
