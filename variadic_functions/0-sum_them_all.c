#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of the parameters
 * @n: num of arguments
 * Return: the sum of the parameters
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(p, n);

	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
