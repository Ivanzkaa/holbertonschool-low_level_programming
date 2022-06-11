#include "main.h"
/**
 * times_table - will print out the function
 * Return: void
 **/
void times_table(void)
{
	int a, b, c, n, i;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			n = c / 10;
			i = c % 10;

			if (b == 0)
				_putchar('0');

			else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + n);
				_putchar('0' + i);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
