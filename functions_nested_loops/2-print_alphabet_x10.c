#include "main.h"
/**
 * print_alphabet_x10 - prints out the function
 *
 * Return: VOID
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)

			putchar(ch);
		putchar('\n');
	}
}
