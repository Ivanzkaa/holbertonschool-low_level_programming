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
	char charType;
	int intType;
	long int longint;
	long long int longerint;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longerint));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
