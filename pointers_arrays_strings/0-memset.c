#include "main.h"
/**
 * _memset - fills a mem with a constant byte
 * @s: string
 * @b: string
 * @n: string
 * Return: a pointer to the memory area
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		s[i] = b;
	}
	return (s);
}
