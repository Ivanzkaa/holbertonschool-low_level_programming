#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 **/
void rev_string(char *s)
{
	int st;
	int left;
	int right;
	int rev;
	int i;

	for (st = 0; s[st] != '\0'; st++)
	{
	}
	right = 0;
	left = st - 1;

	for (i = right; i < left; i++)
	{
		rev = s[i];
		s[i] = s[left];
		s[left] = rev;
		left--;
	}
}
