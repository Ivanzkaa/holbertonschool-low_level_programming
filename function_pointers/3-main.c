#include "3-calc.h"
/**
 * main - print out the function
 * @argc: num of arguments
 * @argv: vector of arguments
 * Return: the result
 **/
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);

	return (0);
}
