#include "main.h"
/**
 *more_numbers - to print out the function
 * Return: void
 **/
void more_numbers(void)
{
	int n, i;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
