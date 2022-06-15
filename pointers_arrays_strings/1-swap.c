#include "main.h"
/**
* swap_int - to print out the function
* @a: first integer
* @b: second integer
* Return: void
**/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
