#include "main.h"
/**
 * root - returns the square root of the number
 * @n: variable
 * @i: variable
 * Return: -1 if it does not have a natural square root
 **/
int root(int i, int n)
{
	int a;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		a = root(i + 1, n);
		return (a + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - prints the square root of the number
 * @n: variable
 * Return: returns -1 if n doesnt have a natural square root
 **/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (root(i, n) == n && n != 1)
		return (-1);
	return (root(i, n));
}
