#include "main.h"
/**
 * binary_to_uint - converts a binary # to an unsigned int
 * @b: pointer to a string of chars
 * Return: the converted number or 0, or NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0, position = 1;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
		i++;

	i--;

	for (; i >= 0; i--, position *= 2)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		converted_num += (position * (b[i] - '0'));
	}

	return (converted_num);
}
