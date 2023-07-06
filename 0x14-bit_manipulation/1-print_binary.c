#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bitsize = sizeof(n) * 8, printed = 0;

	while (bitsize)
	{
		if (n & 1L << --bitsize)
		{
			_putchar('1');
			printed++;
		}

	else if (printed)
		_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
