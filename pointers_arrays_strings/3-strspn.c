#include "main.h"\
	/**
	 * _strspn - get the length of a prefix substring
	 * @s: string
	 * @accept: character
	 * Return: initial segment
	 **/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int b;
	int n = 0;

	for (i = 0; s[i] != 32; i++)
	{
		b = 0;
		while (accept[b])
		{
			if (s[i] == accept[b])
				n++;
			b++;
		}
	}
	return (n);
}
