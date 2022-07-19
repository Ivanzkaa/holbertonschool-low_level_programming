#include "main.h"
/**
 * set_bit - setting the value a bit to 1
 * @n: pointer int
 * @index: to search for value
 * Return: the value of bit
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = 1;
	unsigned int i = 0;

	if (index > (sizeof(n) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		position *= 2;

	*n = *n | position;
	return (1);
}
