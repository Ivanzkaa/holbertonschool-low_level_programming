#include "main.h"
/**
 * main - prints all the arguments it receives
 * @argc: will count the arguments
 * @argv: points the arrai to the arguments
 * Return: wil come out to 0
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);
	return (0);
}
