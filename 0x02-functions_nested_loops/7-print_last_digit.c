#include "main.h"

/**
 * print_lastdigit: Prints the last digit of a number
 * @n: The number to be checked
 * Return: value of the last digit of a number
 */

int print_lastdigit(int n)

{

	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
