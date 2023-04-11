#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that return a pointer
 * to 2 dimensional array of integer
 * @width: width
 * @height: height
 *
 * Return: char pointer
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (ar);
}
