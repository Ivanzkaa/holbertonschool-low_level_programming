#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: array
 * @size: size of array
 **/
void print_diagsums(int *a, int size)
{
	int sum;
	int sum2;
	int i;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + a[(size + 1) * i];
		sum2 = sum2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
