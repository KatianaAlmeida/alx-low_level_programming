#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int index1, index2;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(sizeof(int *) * height);

	if (pointer == NULL)
		return (NULL);

	for (index1 = 0; index1 < height; index1++)
	{
		pointer[index1] = malloc(sizeof(int) * width);

		if (pointer[index1] == NULL)
		{
			for (; index1 >= 0; index1--)
				free(pointer[index1]);

			free(pointer);
			return (NULL);
		}
	}

	for (index1 = 0; index1 < height; index1++)
	{
		for (index2 = 0; index2 < width; index2++)
			pointer[index1][index2] = 0;
	}

	return (pointer);
}
