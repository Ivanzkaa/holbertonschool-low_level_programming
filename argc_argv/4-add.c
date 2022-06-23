#include "main.h"
#include <stdlib.h>
/**
 * main - printing the sum of positive numbers
 * @argc: counts the numbers of arguments
 * @argv: points the array to the arguments
 * Return: 0 or 1
 **/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
