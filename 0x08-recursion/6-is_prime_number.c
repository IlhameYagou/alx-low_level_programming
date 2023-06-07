#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if the integer if a prime number
 * @n: input integer
 * @num: random number other than n
 * Return: 0 or 1
 */

int is_prime(int n, int num);
int is_prime_number(int n)
{
return (is_prime(n, 2));
}

/**
 * is_prime - cheks if n and another random number are prime
 * @n: input integer
 * @num: random number other than n
 * Return: result
 */

int is_prime(int n, int num)
{
	if (num >= n && n > 1)
		return (1);
	else if (n % num == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, num + 1));
}
