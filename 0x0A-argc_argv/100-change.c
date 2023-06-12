#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argv: pointer to an array
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, mincents = 0, maxmoney = atoi(argv[1]);
	int cents[] = {1, 2, 5, 10, 25};

	for (i = 0; i < 5; i++)
	{
		if (maxmoney >= cents[i])
		{
			mincents += maxmoney / cents[i];
			maxmoney = maxmoney % cents[i];
			if (maxmoney % cents[i] == 0)
			{
				break;
			}
		}
	}

	printf("%d\n", mincents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

