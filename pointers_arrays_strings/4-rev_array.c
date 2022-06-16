#include "main.h"
/**
 * reverse_array - reversing strings
 * @a: string
 * @n: string
 * Return: void
 **/
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
