#include "main.h"
/**
 * print_to_98 - to print out the function to 98
 * @n: the variable
 * Return: will come out to 0
 **/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i ", n);

		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
