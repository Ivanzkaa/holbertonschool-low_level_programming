#include <stdio.h>
#define MAX 100
/**
 * main - to write out the function
 * Return: will come out to 0
 **/
int main(void)
{

	int num;
	int i = 0;
	int arr[MAX];
	int j, r;

	while (num != 0)
	{

		(r = num % 10);

		(arr[i] = r);
		(i++);

		num = num / 10;
	}

	for (j = i - 1; j > -1; j--)
	{
		printf("%d", arr[j]);

	}
	putchar('\n');
	return (0);
}
