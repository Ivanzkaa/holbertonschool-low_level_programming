#include "main.h"
/**
 * print_array - prints out elements of an array
 * @a: integer
 * @n: integer
 * Return: void
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			break;
	}
	printf("\n");
}
