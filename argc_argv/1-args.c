#include "main.h"
/**
 * main - prints the # of arguments passed into it
 * @argc: will count the arguments
 * @argv: point to the array of arguments
 * Return: will come out to 0
 **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
