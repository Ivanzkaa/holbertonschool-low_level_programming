#include "main.h"
/**
 * get_bit - returning the value of a bit
 * @n: int
 * @index: int
 * Return: the value of bit at index or -1
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
