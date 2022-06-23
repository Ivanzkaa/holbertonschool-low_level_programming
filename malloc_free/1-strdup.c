#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new allocated space
 * @str: string
 * Return: 0 or NULL
 **/
char *_strdup(char *str)
{
	int i = 0;
	int a = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
			i++;
	i++;

			dest = malloc(sizeof(char) * i);

			if (dest == NULL)
			return (NULL);

			for (; a < i; a++)
			*(dest + a) = *(str + a);
			return (dest);
			}
