#include "main.h"
/**
 * prime - prints a prime number
 * @i: variable
 * @n: variable
 * Return: returns the value
 **/
int prime(int i, int n)
{

	if (n % i == 0 && n != i)
		return (0);

	if (n % i != 0 && i < n)
		return (prime(i + 1, n));
	return (1);
}
/**
 * is_prime_number - the square root of the number
 * @n: variable
 * Return: returns the value
 **/
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (prime(i, n));
}
