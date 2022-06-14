#include "main.h"
/**
 *print_numbers - will print out the function
 *Return: void
 **/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
}
