#include "main.h"
/**
 * _strpbrk - searches for a string
 * @s: string
 * @accept: 2string
 * Return: to the byte that matches
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		while (accept[n])
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
			n++;
		}
	}
	return (0);
}
