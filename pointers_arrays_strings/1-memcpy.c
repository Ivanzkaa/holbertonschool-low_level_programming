#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: destination string
 * @src: source string
 * @n: variable
 * Return: destination
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
