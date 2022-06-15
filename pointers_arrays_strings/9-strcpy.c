#include "main.h"
/**
 * _strcpy - copying the string
 * @dest: string
 * @src: string
 *Return: void
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
