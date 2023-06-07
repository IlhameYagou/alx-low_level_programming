#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number
 * @sqrroot: square root of the number
 * Return: the result
 */

int square(int n, int sqrroot);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds the square root
 * @n: the number
 * @sqrroot: square root
 * Return: result
 */

int square(int n, int sqrroot)
{
	if (sqrroot * sqrroot == n)
		return (sqrroot);
	else if (sqrroot * sqrroot < n)
		return (square(n, sqrroot + 1));
	else
		return (-1);
}

