#include "main.h"
/**
 * _strcat - to print out the function
 * @dest: string1
 * @src : string2
 * Return: dest
 **/
char *_strcat(char *dest, char *src)
{
	int i;
	int n;
	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);

}
