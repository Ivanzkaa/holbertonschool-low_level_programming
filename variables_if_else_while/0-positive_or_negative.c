#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -  function for the code
 * Return: will come out to 0
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)

		printf(" %i is positive\n", n);
	else if ((n == 0))
		printf(" %i is zero\n", n);
	else if (n < 0)
		printf(" %i is negative\n", n);

	return (0);
}
