#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array if integers
 * @width: width
 * @height: height
 * Return: 0 or NULL
 **/
int **alloc_grid(int width, int height)
{
	int **iarray;
	int i;
	int a;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			iarray[i][a] = 0;
		}
	}
	return (iarray);
}
