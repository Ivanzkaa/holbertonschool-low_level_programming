#include "main.h"
/**
 * leet - encodes a string
 * @s: string
 * Return: a pointer to an encoded string
 **/
char *leet(char *s)
{
	int i;
	int n;
	char old[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (old[n] == *(s + i))
				*(s + i) = new[n];
		}
	}
	return (s);
}
