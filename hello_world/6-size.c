#include<stdio.h>
/**
 * main - to type out the functions
 * float - it holds some of the data
 * double - it holds more of the data
 * char - it specifies the character
 * void - to type it out
 * Return: will come out to 0
 **/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));

	return (0);
}
