#include <stdio.h>
/**
 * main - to print out the function
 * Return: will come out to 0
 **/
int main(void)
{
	char ch;

	printf("Uppercase characters : \n");

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	printf("\nLowercase characters : \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
