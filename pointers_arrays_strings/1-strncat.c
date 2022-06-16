#include "main.h"
/**
 * _strncat - concats two strings
 * @dest: string
 * @src: string
 * @n: variable
 * Return: value of dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
	{
	}
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*temp = *src;
		temp++;
		n--;
	}
	return (dest);
}
