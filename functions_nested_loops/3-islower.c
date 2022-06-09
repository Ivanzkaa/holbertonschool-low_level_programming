#include "main.h"
/**
 * _islower - to check if letter is lowercase
 * @c: part of the islower function
 * Return: will come out to 0
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
