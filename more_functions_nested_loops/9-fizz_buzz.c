#include "main.h"
/**
 *main - to print ou the function
 *Return: will come out to 0
 **/
int main(void)
{
	int num = 100;
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i < num)

				printf("Buzz");

			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}

		i++;
	}
	printf("\n");
	return (0);
}
