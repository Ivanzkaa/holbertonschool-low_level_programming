#include "main.h"
/**
 *print_diagonal - to print out the function
 * @n: the variable of the code
 * Return: void
 **/
void print_diagonal(int n)
{
	int d;
	int dig;

	if (n > 0)
{

		for (d = 0; d < n; d++)
		{
			for (dig = 0; dig < d; dig++)
			{
				_putchar(' ');
			}
				_putchar(92);
				_putchar('\n');
			}
		}
	else
	{
		_putchar('\n');
	}
}
