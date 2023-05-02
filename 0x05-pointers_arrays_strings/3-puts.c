#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer to the string
 * Return:  string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(srt[i]);
		i++;
	}
	_putchar('\n');
}
