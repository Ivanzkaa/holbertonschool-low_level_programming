#include "search_algos.h"
/**
 * binary_search - searching for a value in a sorted
 * array of integers using the binary search algorithm
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to search for
 * Return: if value not present in array or if it's NULL,
 * return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	printf("Searching in array:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d, ", array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("%d\n", array[i]);
	return (-1);
}
