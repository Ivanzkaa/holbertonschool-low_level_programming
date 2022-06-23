#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: count the argumnets
 * @argv: points array to the argumnents
 * atoi  func that converts a string into an int
 * Return: 0 or 1
 **/
int main(int argc, char *argv[])
{
	int i;
	int m = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}

		printf("%d\n", m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
