#include "3-calc.h"
/**
 * op_add - the sum of two numbers
 * @a: num 1
 * @b: num 2
 * Return: the sum of the two
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract the two nums
 * @a: num 1
 * @b: num 2
 * Return: substract the two nums
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two nums
 * @a: num 1
 * @b: num 2
 * Return: the mul of the two nums
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the divison of the two nums
 * @a: num 1
 * @b: num 2
 * Return: the div of the two nums
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the % of the nums
 * @a: num 1
 * @b: num 2
 * Return: the mod of the nums
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
