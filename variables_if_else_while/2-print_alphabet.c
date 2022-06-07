#include <stdio.h>
/**
 * main - to print out the function
 * Return: will come out to 0
 **/
int main(void)
{
	char ch;

	printf("\nLowercase characters: \n");

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c ", ch);
	}

	return (0);
}
