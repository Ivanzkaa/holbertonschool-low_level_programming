#include <stdio.h>
/**
 * main - to print out the function
 * Return: will come out to 0
 **/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
