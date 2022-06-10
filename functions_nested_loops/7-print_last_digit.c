#include "main.h"
/**
 * print_last_digit - to print out the function
 * @n : the variable
 * Return: will come out to m
 **/
int print_last_digit(int n)
{
	int m, p;

	m = n % 10;

	if (m < 0)

		m = -m;
	p = '0' + m;
	_putchar(p);
	return (m);
}
