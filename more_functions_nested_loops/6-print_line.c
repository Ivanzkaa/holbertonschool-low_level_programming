#include "main.h"
/**
 * print_line - to print out the fucntion
 *@n: the variable of this code
 * Return: void
 **/
void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		if (n > 0)
			_putchar('_');
		line++;
	}
	_putchar('\n');
}
