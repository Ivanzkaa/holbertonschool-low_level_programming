#include "main.h"
/**
 *print_square - to print out the function
 *@size: the variable of the task
 *Return: void
 **/
void print_square(int size)
{

	int square, square2;

	if (size > 0)
	{
		square2 = 0;

		while (square2 < size)
		{
			square = 0;
			while (square < size)
			{
				_putchar('#');
				square++;
			}
			_putchar('\n');
			square2++;
		}
	}
	else
		_putchar('\n');
}
