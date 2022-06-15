#include "main.h"
/**
* _puts - prints a string followed by \n
* @str: string
* Return: void
**/
void _puts(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)

{
	_putchar(str[st]);
}
	_putchar('\n');
}
