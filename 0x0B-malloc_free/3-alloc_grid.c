#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid -  function that returns a pointer to a 2 dimensional array of integers.
  * @width: the widht of the 2 dimensional array
  * @height: the height of the 2 dimensional array
  *
  * Return: If width or height is 0 or negative, return NULL.
  *         else return 2-D array.
  */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
