#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concentrating two strings
 * @s1: string 1
 * @s2: String 2
 * Return: 0 or NULL
 **/
char *str_concat(char *s1, char *s2)
{
	int st1;
	int st2;
	int i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (st1 = 0; st1 <= *s1; st1++)
	{
	}
	for (st2 = 0; st2 <= *s2; st2++)
	{
	}
	array = malloc(sizeof(char) * (st1 + st2 + 1));


	if (array == NULL)

	return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
