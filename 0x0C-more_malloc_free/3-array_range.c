#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number of values stored
 * @max: maximum number of values stored
 * 
 * Return: pointer
 * */

int *array_range(int min, int max)
{
	int *pointer;
	int index, size;
	if (min > max)
		return (NULL);
	size = 1 + max - min;
	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (index = 0; min <= max; index++)
		pointer[index] = min++;
	return (pointer);
}
