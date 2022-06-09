#include "main.h"
/**
 * _isalpha - to check if letter is upercase
 * @c: part of the isalpha function
 * Return: will come out to 0
 **/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
