#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the function that allocates the memory
 * @b: integer
 * Return: void
 **/
void *malloc_checked(unsigned int b)
{
	void *poi;

	poi = malloc(b);
	if (poi == NULL)
		exit(98);

	return (poi);
}
