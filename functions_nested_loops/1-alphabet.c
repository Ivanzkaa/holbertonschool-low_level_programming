#include "main.h"

/**
 * print_alphabet - to print out the function
 *
 * Return: VOID
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
