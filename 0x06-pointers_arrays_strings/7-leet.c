#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to string
 * Return: pointer to s
 */

char *leet(char *s)
{
	int string_length, leetcount;
	char leetletters[] = "aAeAoOtTlL";
	char leetnumb[] = "4433007711";

	string_length = 0;
	while (s[string_length] != '\0')
	{
		leetcount = 0;
	while (leetcount < 10)
	{
		if (leetletters[leetcount] == s[string_length])
			{
			s[string_length] = leetnumb[leetcount];
					}
			leetcount++;
		}
		string_length++;
	}
	return (s);
}
