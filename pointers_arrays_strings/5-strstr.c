#include "main.h"
/**
 * _strstr - locating a substring
 * @haystack: string
 * @needle: string2
 * Return: beginning of a located substring
 **/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n = 0;

	while (haystack[i])
	{
		while (needle[n])
		{
			if (haystack[i + n] != needle[n])
			{
				break;
			}
			n++;
		}
		if (needle[n] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
