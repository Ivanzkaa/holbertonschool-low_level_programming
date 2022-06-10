#include "main.h"
/**
 * jack_bauer - will print out the function of this code
 * Return: void
 **/
void jack_bauer(void)
{
	int h, m, num, num2, num3, num4;

	for (h = 0; h < 24; h++)
	{
		num = h / 10;
		num2 = h % 10;
		for (m = 0; m < 60; m++)
		{
			num3 = m / 10;
			num4 = m % 10;
			_putchar('0' + num);
			_putchar('0' + num2);
			_putchar(':');
			_putchar('0' + num3);
			_putchar('0' + num4);
			_putchar('\n');
		}
	}
}
