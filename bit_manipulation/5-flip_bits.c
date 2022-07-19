#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get from one
 * number to another.
 * @n: pointer
 * @m: int
 * Return: number of bits you would need to flip to get from one # to another
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int quantity_to_flip = 0, new_number = 0;

	new_number = n ^ m;

	while (new_number)
	{
		if (new_number & 1)
			quantity_to_flip++;
		new_number = new_number >> 1;
	}

	return (quantity_to_flip);
}
