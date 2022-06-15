#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 * Return: void
 **/
void puts_half(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)
	{
	}
	st = (st + 1) / 2;
	for (; str[st] != '\0'; st++)
	{
		_putchar(str[st]);
	}
	_putchar('\n');
}
