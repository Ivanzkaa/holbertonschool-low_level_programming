#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: string
 * Return: void
 **/
void print_rev(char *s)
{
	int st;

	for (st = 0; s[st] != '\0'; st++)
	{
	}
	while (st > 0)
	{
		(st--);
		_putchar(s[st]);
	}
	_putchar('\n');
}
