#include "search_algos.h"
/**
 * linear_search - search for a value in an array of
 * integers
 * @array: pointer to the first element
 * @size: size of the array
 * @value: the value to search for
 * Return: if value not present in array, or if it's NULL, return
 * -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[1]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
