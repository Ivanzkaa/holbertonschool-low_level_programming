#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: the string
 * Return: void
 **/
void puts2(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)
	{
		_putchar(str[st]);
		if (str[st + 1] != '\0')
			st++;
	}
	_putchar('\n');
}
