#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array
 * @size: the size
 * @cmp: pointer
 * Return: 0 or 1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}
	return (-1);
}
