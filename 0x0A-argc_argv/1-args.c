#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argv: pointer to an array
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
