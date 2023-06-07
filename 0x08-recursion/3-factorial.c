#include "main.h"

/**
 * factorial - calculates the factorial of a given number.
 * @n: the given number
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
