#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
/**
 * main - for wrting the output of the code
 * Return: will come out to 0
 **/
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	num = n % 10;
	if (num > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, num);

	else if (num == 0)
		printf("Last digit of %i is %i and is 0\n", n, num);

	else if (num < 6 && num != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);

	return (0);
}
