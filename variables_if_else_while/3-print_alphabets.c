#include <stdio.h>
/**
 * main - to print out the function
 * Return: will come out to 0
 **/
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
