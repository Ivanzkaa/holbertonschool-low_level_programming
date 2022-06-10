#include "main.h"
/**
 * _abs - to print out the function
 * Return: will come out to n
 * @n: variable
 **/
int _abs(int n)
{

	if (n >= 0)
		return (n);

	else
	{
		(n *= -1);
		return (n);
	}
}
