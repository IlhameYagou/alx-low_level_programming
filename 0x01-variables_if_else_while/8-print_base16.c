#include <stdio.h>
/**
 * main - Entry point
 * description: 'prints all the numbers of base 16 in lowercase'
 * Return: always 0
 */
int main(void)
{
	int n;
	int b;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
