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
	int **n;
	int i;
	int a;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = (int **)malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = (int *)malloc(sizeof(int) * width);
		if (n[i] == NULL)
		{
			for (a = 0; a < i; a++)
			{
				free(n[a]);
			}
			free(n);
		}
	}

	for (i = 0; i < height; i++)
		for (a = 0; a < width; a++)
			n[i][a] = 0;

	return (n);
}
