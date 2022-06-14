#include "main.h"
/**
 *_isdigit - to print out if checks for a digit
 *@c: the variable for the code
 *Return: will come out to 0 or 1
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
