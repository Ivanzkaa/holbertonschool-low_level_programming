#include "main.h"
/**
 * print_most_numbers - will print out the function
 *Return: void
 **/
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			putchar(num);
	}
	putchar('\n');
}
