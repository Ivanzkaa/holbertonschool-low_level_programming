#include <stdio.h>
/**
 * main - to print out the function
 * Return: will come out to 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

