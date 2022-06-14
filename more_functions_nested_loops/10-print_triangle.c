#include "main.h"
/**
 * print_triangle - to print out the main function
 * @size: variable
 * Return: void
 **/
void print_triangle(int size)
{
	int t = 0;
	int tr;
	int tri = size - 1;

	if (size > 0)
	{
		for (; t < size; t++)
		{
			for (tr = 0; tr < size; tr++)
			{
				if (tr < tri)
					_putchar(' ');
				else
					_putchar('#');
			}
			tri--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
