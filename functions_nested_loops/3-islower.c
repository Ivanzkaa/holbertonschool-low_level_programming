#include "main.h"
/**
 * _islower - to check if letter is lowercase
 * @c: part of the islower function
 * Return: will come out to 0
 **/
int _islower(int c)
{
	if (islower(c))
	{
		putchar(c);
	}
	else
	{
		return (1);
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
